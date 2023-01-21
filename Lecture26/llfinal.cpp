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

void printll(node*head){
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
int lengthofll(node*head){
	int co=0;
	node*temp=head;
	while(temp!=NULL){
			co++;//3
	temp=temp->next;


	}
	return co;

}

node* midpoint(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        //  while(fast->next!=NULL and fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}


node* mergetwosortedll(node*head1,node*head2){
	// agar ll 1 khali hai return karo ll2
	if(head1==NULL){
		return head2;
	}

	// agar ll2 khali hai return karo ll2
	else if(head2==NULL){
		return head1;
	}

	// rec sol

	if(head1->d<head2->d){
		node*newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);
		return newhead;

	}
	else{
		node*newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		return newhead;

	}





}

node* mergesort(node*head1){ 
	// agar ll khali hai
	if(head1==NULL){
		return head1;
	}
	if(head1->next==NULL){
		return head1;
	}


	// find mid
	node*m=midpoint(head1);
	node*head2=m->next;
	m->next=NULL;
	// sort two parts
	head1=mergesort(head1);//1 6 7 9
	head2=mergesort(head2);//0 3 4
	// 0 1 3 4 6 7 9
	// mergetwosortedparts
	return mergetwosortedll(head1,head2);


}

node* reverseall(node*head){
	node*prev=NULL;
	node*currentnodejispehunkaamkarrahehai=head;
	while(currentnodejispehunkaamkarrahehai!=NULL){
		node*nex=currentnodejispehunkaamkarrahehai->next;
	currentnodejispehunkaamkarrahehai->next=prev;
	prev=currentnodejispehunkaamkarrahehai;
	currentnodejispehunkaamkarrahehai=nex;

	}
	return prev;
	

}

int main(){
	// node*head1=NULL;
	// node*tail1=NULL;
	// node*head2=NULL;
	// node*tail2=NULL;
	// int n,m;//
	// cin>>n>>m;//
	// for(int i=1;i<=n;i++){
	// 	int d;
	// 	cin>>d;
	// 	insertattail(head1,tail1,d); //2 4 
	// }
	// for(int i=1;i<=m;i++){
	// 	int d;
	// 	cin>>d;
	// 	insertattail(head2,tail2,d);//0 3 9
	// }
	// // 0 2 3 4  9
	// node*newhead=mergetwosortedll(head1,head2);

	node*head=NULL;
	node*tail=NULL;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int d;
		cin>>d;
		insertattail(head,tail,d); //2 4 
	}
	printll(head);
	node* newll=reverseall(head);
	cout<<endl;
	// node*newhead=mergesort(head);

	printll(newll);












   

	return 0;
}