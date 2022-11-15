#include<iostream>
using namespace std;

void update(int &x){
	x=x+100;
	cout<<x<<endl;//110
}
int main(){
	int a=10;
	cout<<a<<endl;//10
	update(a);
	cout<<a<<endl;//110 
	
	return 0;
}

