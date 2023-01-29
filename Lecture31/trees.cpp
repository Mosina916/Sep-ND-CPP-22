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
node* buildtree(){
	int d;
	cin>>d;//8
	if(d==-1){
		return NULL;
	}
	else{

	node*root=new node(d);
	root->left=buildtree(); //lst
	root->right=buildtree();//rst
	return root;

	}


}
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

int diameteroftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// rec case
	// if dia passing through root
	int op1=heightoftree(root->left)+heightoftree(root->right);
	int op2=diameteroftree(root->left);
	int op3=diameteroftree(root->right);
	return max(op1,max(op2,op3));
}
// int cou=0;
// void countleft(node*root){
// 	// base case
// 	if(root==NULL){
// 		return;
// 	}


// 	// /rec case
// 	if(root->left==NULL and root->right==NULL){
// 		cou++;
// 		// return;
// 	}

// 	countleft(root->left);
// 	countleft(root->right);


// }


void countleft2(node*root,int &cou){
	// base case
	if(root==NULL){
		return;
	}
	// /rec case
	if(root->left==NULL and root->right==NULL){
		cou++;
		// return;
	}

	countleft2(root->left,cou);
	countleft2(root->right,cou);


}

int countleft3(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// /rec case
	if(root->left==NULL and root->right==NULL){
		return 1;
		
	}

	return countleft3(root->left)+countleft3(root->right);
}
void mirror(node*root){

	// base case
	if(root==NULL){
		return;
	}
	// if(root->left==NULL and root->right==NULL){
	// 	return;
	// }



	// rec case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}
class pa{
	public:
	int h;
	int d;
	pa(){
		h=0;
		d=0;
	}
};
pa diaoptimised(node*root){
	pa x;
	// base case
	if(root==NULL){
		// Pair t;
		return x;

	}


	// rec case
	
	pa p1=diaoptimised(root->left);
	pa p2=diaoptimised(root->right);
	// x ki height set karni hai
	x.h=max(p1.h,p2.h)+1;
	// // x ka dia set karni hai
	int op1=p1.h+p2.h;
	int op2=p1.d;
	int op3=p2.d;
	x.d=max(op1,max(op2,op3));
	return x;


}

node* buildtreelevelwise(){
	int data;
	cout<<"enter the data of root"<<endl;
	cin>>data;//-1
	if(data==-1){
		return NULL;
	}


	node*root=new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node*x=q.front();//1
	q.pop();
	cout<<"enter left and right child of "<<x->data<<endl;
	int lc,rc;
	cin>>lc>>rc;//-1 -1

	if(lc!=-1){
		x->left=new node(lc);
	q.push(x->left);

	}
	
	if(rc!=-1){
		x->right=new node(rc);
	q.push(x->right);


	}

	}

	return root;

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


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	// node*root=buildtree();
	node*root=buildtreelevelwise();
	cout<<endl;
	printlevelwise(root);
	// pa a=diaoptimised(root);
	// cout<<a.d<<endl;
	// cout<<a.h<<endl;


	return 0;
}