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
	cout<<root->data<<",";//root
	preorder(root->left);//lst
	preorder(root->right);//rst

}

void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	
	inorder(root->left);//lst
	cout<<root->data<<",";//root
	inorder(root->right);//rst

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


void rightview(node*root,int &ml,int cl){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	if(cl>ml){
		cout<<root->data<<" ";
		ml++;

	}
	rightview(root->right,ml,cl+1);
	rightview(root->left,ml,cl+1);
}

void leftview(node*root,int &ml,int cl){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	if(cl>ml){
		cout<<root->data<<" ";
		ml++;

	}
	leftview(root->left,ml,cl+1);
	leftview(root->right,ml,cl+1);
	
}
int pre[]={8,3,1,6,4,7,10,14,13};
int ino[]={1,3,4,6,7,8,10,13,14};
// 8 3 10 1 6 14 13 7 4 7 -1
// 
int i=0;
node* buildtreeusingpreandin(int s,int e){
	if(s>e){
		return NULL;
	}



	int d=pre[i];//8
	i++;
	int indx;
	for(int k=s;k<=e;k++){
		if(ino[k]==d){
			indx=k;
			break;
		}
	}
	node*root=new node(d);
	root->left=buildtreeusingpreandin(s,indx-1);
	root->right=buildtreeusingpreandin(indx+1,e);
	return root;



}
// void printlevelwise(node*root){
// 	queue<node*>q;
// 	q.push(root);
// 	q.push(NULL);
// 	while(!q.empty()){
// 		node*x=q.front();
// 	q.pop();
// 	if(x==NULL){
// 		cout<<endl;
// 		if(!q.empty()){
// 			q.push(NULL);
// 		}

// 	}
// 	else{
// 		cout<<x->data<<" ";
// 		if(x->left!=NULL){
// 			q.push(x->left);
// 		}
// 		if(x->right!=NULL){
// 			q.push(x->right);
// 		}
// 	}
// 	}
	
// }
int main(){
	int n=sizeof(pre)/sizeof(int);
	node* root=buildtreeusingpreandin(0,n-1);
	printlevelwise(root);
	cout<<endl;
	// node*root=buildbst();
	// preorder(root);
	// cout<<endl;
	// inorder(root);
	// int k=0;
	// rightview(root,k,1);
	// cout<<endl;
	// int l=0;
	// leftview(root,l,1);

	// inorder(root);
	

	return 0;
}