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
void deleteatanypos(node*&head,node*&tail,int pos){
    if(pos==0){
        deleteathead(head,tail);
    }
    else if(pos>=lengthoffllrec(head)-1){
        deleteattail(head,tail);
    }
    else{
        node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;

        }
        node*d=temp->next;
        temp->next=d->next;
        delete d;
        d=NULL;
        
    }
}

void insertatanypos(node*&head,node*&tail,int pos,int data){
    if(pos==0){
        insertathead(head,tail,data);
    }
    else if(pos>=lengthoffllrec(head)){
        insertattail(head,tail,data);
    }
    else{
        node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }

}

bool searchinll(node*head,int key){
    // base case
    if(head==NULL){
        return false;
    }
    // rec case
    if(head->d==key){
        return true;
    }
    return searchinll(head->next,key);

}
// odd k lye sahi dega even k lye 2nd wala dega
// int midpoint(node*head){
//     node*slow=head;
//     node*fast=head;
//     while(fast!=NULL and fast->next!=NULL){
//         //  while(fast->next!=NULL and fast!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;

//     }
//     return slow->d;
// }

// odd k lye sahi dega even k lye 2nd wala dega
int midpoint(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        //  while(fast->next!=NULL and fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow->d;
}

int main(){
	node*head=NULL;
	node*tail=NULL;
    int n,d;
    cin>>n;//5
    for(int i=1;i<=n;i++){
        cin>>d;
        insertattail(head,tail,d);
    }

    cout<<midpoint(head)<<endl;

	return 0;
}