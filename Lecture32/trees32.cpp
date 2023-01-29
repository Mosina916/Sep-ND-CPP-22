#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	cout<<root->data<<" ";//root
	preorder(root->left);//lst
	preorder(root->right);//rst

}

int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return max(heightoftree(root->left),heightoftree(root->right))+1;
}

void printlevelwise(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		cout<<x->data<<" ";
		if(x->left!=NULL){
			q.push(x->left);
		}
		if(x->right!=NULL){
			q.push(x->right);
		}
	}
	}
	
}
node*insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	else if(data<=root->data){
		root->left=insertinbst(root->left,data);
		return root;

	}
	else{
		root->right=insertinbst(root->right,data);
		return root;
	}

}
node* buildbst(){
	int data;
	cin>>data;//8
	node*root=NULL;

// loop
	while(data!=-1){
		root=insertinbst(root,data);//300
		cin>>data;//10 13 -1

	}

	return root;
}

bool searchinbst(node*root,int key){
	// base case 
	if(root==NULL){
		return false;
	}

	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);

	}
	else{
		return searchinbst(root->right,key);

	}
	

}


void printinrangek1k2(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1k2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2(root->right,k1,k2);
}

void printinrangek1k2reverse(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1k2reverse(root->right,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2reverse(root->left,k1,k2);
}

node* createtreeusingarr(int arr[7],int s,int e){
	// base case
	if(s>e){
		return NULL;
	}
	// rec case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=createtreeusingarr(arr,s,mid-1);
	root->right=createtreeusingarr(arr,mid+1,e);
	return root;
}
class linkedlist{
public:
	node*head;
	node*tail;
	linkedlist(){
		head=NULL;
		tail=NULL;
	}
};
linkedlist convertbsttoll(node*root){
	linkedlist l;
	// base case
	if(root==NULL){
		return l;

	}
	// node has no child
	
	if(root->left==NULL and root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;

	}
	// node has lst
	else if(root->left!=NULL and root->right==NULL){
		linkedlist p1=convertbsttoll(root->left);
		p1.tail->right=root;
		l.head=p1.head;
		l.tail=root;
		// return l;

	}


	// node has rst
	else if(root->left==NULL and root->right!=NULL){
		linkedlist p1=convertbsttoll(root->right);
		root->right=p1.head;
		l.head=root;
		l.tail=p1.tail;
		// return l;
		
	}


	// node has lst and rst
	else{
		linkedlist p1=convertbsttoll(root->left);
		linkedlist p2=convertbsttoll(root->right);
		p1.tail->right=root;
		root->right=p2.head;
		l.head=p1.head;
		l.tail=p2.tail;
		// return l;

	}
	return l;

}
// 8 10 3 6 14 1 4 7 13 -1
void printll(node*head){
	

	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->right;

	}
	cout<<endl;
	
}
int main(){

	
	node*root=buildbst();
	printlevelwise(root);
	linkedlist l=convertbsttoll(root);
	printll(l.head);





	// int arr[7]={1,2,3,4,5,6,7};
	// node*root=createtreeusingarr(arr,0,6);

	// int k1,k2;
	// cin>>k1>>k2;
	// // printinrangek1k2(root,k1,k2);
	// printinrangek1k2reverse(root,k1,k2);
	// cout<<endl;
	// int key;
	// cin>>key;
	// if(searchinbst(root,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }





	return 0;
}