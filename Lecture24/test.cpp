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
int main(){
	node n1(9);
	node n2(5);
	n1.next=&n2;

	cout<<n1.d<<endl;
	// cout<<(n1.next)->d<<endl;
	cout<<(*n1.next).d;
	// cout<<n2.d<<endl;


	return 0;
}