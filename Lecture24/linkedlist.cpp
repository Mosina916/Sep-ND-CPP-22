#include<iostream>
using namespace std;
class node{
	public:
	int d;
	node*next;

	node(int data){
		d=data;
		next=NULL;
	}

};
void insertathead(node*&head,node*&tail,int data){
	if(head==NULL){
		// ll khali hai
		node*ptr=new node(data);
		head=ptr;
		tail=ptr;

	}
	else{
		// khali nahi hai
		node*ptr=new node(data);
		ptr->next=head;
		head=ptr;
		// ptr->next=tail;

	}

}
void printll(node*head){
	// node*temp=head;//750

	// while(temp!=NULL){
	// 	cout<<temp->d<<" ";//34
	// 	temp=temp->next;//300

	// }
	while(head!=NULL){
		cout<<head->d<<" ";//34
		head=head->next;//300

	}
	
}
void insertattail(node*&head,node*&tail,int data){
	if(head==NULL){
		// linked list khali hai
		node*ptr=new node(data);
		head=ptr;
		tail=ptr;
	}
	else{
		node*ptr=new node(data);
		tail->next=ptr;
		tail=ptr;

	}

}
void deleteathead(node*&head,node*&tail){
	// case 1:ll khali 
	if(head==NULL){
		return;
	}
	// case 2:ll mai ek single node hai
	if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// case 3:ll multiple nodes
	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
	}

}
int lengthofll(node*head){
	int co=0;
	node*temp=head;
	while(temp!=NULL){
			co++;//3
	temp=temp->next;


	}
	return co;

}
void deleteattail(node*&head,node*&tail){
	// case 1:ll khali 
	if(head==NULL){
		return;
	}
	// case 2:ll mai ek single node hai
	if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// case 3:ll multiple nodes
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		temp->next=NULL;
		tail=temp;
		
	}
}
int lengthoffllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lengthoffllrec(head->next);
}
int main(){
	node*head=NULL;
	node*tail=NULL;
	// insert
	// insert at head
	
	insertathead(head,tail,7);
	insertathead(head,tail,9);
	insertathead(head,tail,34);
	insertattail(head,tail,80);
	// deleteathead(head,tail);

	deleteattail(head,tail);
	printll(head);
	cout<<endl;

	// cout<<lengthofll(head)<<endl;

	cout<<lengthoffllrec(head)<<endl;
	// printll(head);

	

	return 0;
}