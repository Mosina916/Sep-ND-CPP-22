#include<iostream>
using namespace std;


void update(int a){
	a=a+100;
	cout<<a<<endl;//110
}
int main(){
	int a=10;
	cout<<a<<endl;//10
	update(a);
	cout<<a<<endl;//10 
	
	return 0;
}

