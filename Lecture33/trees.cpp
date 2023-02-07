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
class parr{
public:
	int hei;
	bool bal;
	parr(){
		hei=0;
		bal=true;

	}

};
parr isbalaned(node*root){
	parr p;
	// base case
	if(root==NULL){
		return p;
	}
	// rec case
	parr p1=isbalaned(root->left);
	parr p2=isbalaned(root->right);
	p.hei=max(p1.hei,p2.hei)+1;
	if(p1.bal==true and p2.bal==true and abs(p1.hei-p2.hei)<=1){
		p.bal=true;
	}
	else{
		p.bal=false;

	}
	
	return p;

}
bool checkbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}



	// rec case
	if(root->data>=min and root->data<=max and checkbst(root->left,min,root->data) and checkbst(root->right,root->data+1,max)){
		return true;
	}
	return false;


}

node* deletioninbst(node*root,int ele){//6
	if(root==NULL){
		return NULL;
	}

	// ele lst exist
	if(ele<root->data){
		root->left=deletioninbst(root->left,ele);
		return root;
	}
	// ele rst exist
	else if(ele>root->data){
		root->right=deletioninbst(root->right,ele);
		return root;
	}
	// ele is equal to root
	else{
		// case 1 lst and rst doesn't exist
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return NULL;

		}
		// case 2 lst exist and rst doesn't exist
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=NULL;
			return temp;
		}
		// case 2 lst does exist and rst exist
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=NULL;
			return temp;
		}
		// both lst and rst exist
		else{
			// // i selected lst ka max
			// node*temp=root->left;
			// while(temp->right!=NULL){
			// 	temp=temp->right;
			// }
			// swap(root->data,temp->data);
			// root->left=deletioninbst(root->left,ele);
			// return root;
			// rst ka min selected
			node*temp=root->right;
			while(temp->left!=NULL){
				temp=temp->left;
			}
			swap(root->data,temp->data);
			root->right=deletioninbst(root->right,ele);
			return root;
		}

	}


}
void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	
	inorder(root->left);//lst
	cout<<root->data<<" ";//root
	inorder(root->right);//rst

}
int main(){

	node*root=buildbst();
	inorder(root);
	int ele;
	cin>>ele;

	root=deletioninbst(root,ele);
	cout<<endl;
	inorder(root);

	// parr x=isbalaned(root);
	// if(x.bal==true){
	// 	cout<<"tree is balanced"<<endl;
	// }
	// else{
	// 	cout<<"tree is not balanced"<<endl;

	// }

	// if(checkbst(root)==true){
	// 	cout<<"it is bst"<<endl;
	// }
	// else{
	// 	cout<<"it is not a bst"<<endl;
	// }





	return 0;
}