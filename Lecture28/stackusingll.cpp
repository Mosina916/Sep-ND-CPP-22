#include <iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
class stack{
	node*head;
	int l;

public:
	stack(){
		head=NULL;
		l=0;
	}
	// push	
	// insertathead
	void push(int d){
		node*n=new node(d);//
		n->next=head;
		head=n;
		l++;

	}

	// pop
	void pop(){
		// deleteathead
		if(head==NULL){
			// ll khali hai
			return;
		}
		// else if(head->next==NULL){
		// 	delete head;
		// 	head=NULL;
		// 	l--;
		// }
		else{
			// multiple nodes
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			l--;

		}
	}
	
	// size
	int size(){
		return l;
	}
	// top
	int top(){
		return head->data;
	}
	// empty
	bool empty(){
		if(l==0){
			return true;
		}
		return false;
	}	
};
int main(){
	stack s;
	// // cout<<s.v[2]<<endl;
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(23);
	// cout<<s.v[2]<<end
	s.pop();

	
	// print stac
	while(!s.empty()){
		cout<<s.top()<<" ";//23 
		s.pop();

	}
	
	// s.pop();
	// cout<<s.size()<<endl;
	// cout<<s.top()<<endl;





}