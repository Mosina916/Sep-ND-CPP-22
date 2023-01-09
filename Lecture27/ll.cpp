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

bool checkcyclepresentornot(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(fast==slow){
		return true;
	}


	}
	return false;
	

}
void createcycle(node*head,node*tail){
	tail->next=head->next->next;

}

void breakcycleinll(node*head){
	// check if cycle is present or not
		node*slow=head;
	node*fast=head;
	bool kyacyclehai=false;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(fast==slow){
		kyacyclehai=true;
		break;
	}


	}

	// step 2 if cycle is present then break it
	if(kyacyclehai==true){
		// tou break karlo
		slow=head;

		while(slow->next!=fast->next){
			slow=slow->next;
		fast=fast->next;

		}
		fast->next=NULL;
		
	}
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

// node* reverseknodes(node*head,int k){
// 	// base case
// 	if(head==NULL){
// 		return NULL;
// 	}


// 	// rec case
// 	node*temp=head;
// 	for(int i=1;i<=k-1;i++){
// 		temp=temp->next;
// 	}
// 	node*newhead=temp->next;
// 	temp->next=NULL;
// 	node*p=reverseall(head);//3 2 1
// 	node*t=p;
// 	for(int i=1;i<=k-1;i++){
// 		t=t->next;
// 	}
// 	t->next=reverseknodes(newhead,k);
// 	return p;


// }

node* reverseknodes(node*head,int k){
	// base case
	if(head==NULL){
		return NULL;
	}


	// rec case
	node*temp=head;
	for(int i=1;i<=k-1;i++){
		temp=temp->next;
		if(temp==NULL){
			return NULL;
		}
	}
	node*newhead=temp->next;
	temp->next=NULL;
	node*p=reverseall(head);//3 2 1
	node*t=p;
	for(int i=1;i<=k-1;i++){
		t=t->next;
	}
	t->next=reverseknodes(newhead,k);
	return p;


}
node* kthnodefromend(node*head,int k){
	node*slow=head;
	node*fast=head;
	for(int i=0;i<k-1;i++){
		fast=fast->next;
	}
	while(fast->next!=NULL){
		slow=slow->next;
		fast=fast->next;
	}
	return slow;
}

int main(){
	
	node*head=NULL;
	node*tail=NULL;
	int n;
	cin>>n;//8
	// 0 1 2 3 4 5 6 7 8  9 10

	for(int i=1;i<=n;i++){
		int d;
		cin>>d;
		insertattail(head,tail,d); //2 4 
	}
	int k;
	cin>>k;//4
	int bachehuvenodes=lengthofll(head)%k;//3
	node*temp=kthnodefromend(head,bachehuvenodes+1);
	node*j=temp->next;
	temp->next=NULL;
	node*x=reverseall(j);//10 9 8

	node*newhead=reverseknodes(head,k);

	node*d=newhead;
	while(d->next!=NULL){
		d=d->next;

	}
	d->next=x;
	
	printll(newhead);
	// if(checkcyclepresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }

	// createcycle(head,tail);

	// if(checkcyclepresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }
	// breakcycleinll(head);
	// if(checkcyclepresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }




   

	return 0;
}