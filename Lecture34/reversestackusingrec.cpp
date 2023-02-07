#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}

	int d=s.top();//3
	s.pop();
	insertatbottom(s,x);
	s.push(d);

}
void reversestack(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}
	// rec case
	int x=s.top();//6
	s.pop();
	reversestack(s);
	insertatbottom(s,x);
}
void printstack(stack<int> s){

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();

	}
	cout<<endl;
	
}
int main(){
	stack<int> s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(6);
	printstack(s);
	reversestack(s);
	printstack(s);
	

	return 0;
}