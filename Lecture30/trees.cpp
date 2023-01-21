#include<iostream>
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


void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	
	postorder(root->left);//lst
	postorder(root->right);//rst
	cout<<root->data<<" ";//root

}
int countvodesinatree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	return countvodesinatree(root->left)+countvodesinatree(root->right)+1;

}
int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return max(heightoftree(root->left),heightoftree(root->right))+1;
}

int sumofdataofnodesofatree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	return sumofdataofnodesofatree(root->left)+sumofdataofnodesofatree(root->right)+root->data;

}
// 8
bool searchkey(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}
	// rec case
	if(root->data==key ||searchkey(root->left,key) || searchkey(root->right,key)){
		return true;
	}
	return false;

}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	node*root=buildtree();
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;

	cout<<"total no of nodes "<<countvodesinatree(root)<<endl;
	cout<<"height of tree is "<<heightoftree(root)<<endl;
	cout<<"sum of nodes tree is "<<sumofdataofnodesofatree(root)<<endl;
	int key;
	cin>>key;
	if(searchkey(root,key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}

	return 0;
}