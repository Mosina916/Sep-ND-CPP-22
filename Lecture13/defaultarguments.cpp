#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	return a+b;
// }
// int sum(int a,int b,int c){
// 	return a+b+c;
// }
// int sum(int a,int b,int c,int d){
// 	return a+b+c+d;
// }
// int sum(int a,int b,int c,int d,int e){
// 	return a+b+c+d+e;
// }

// int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
// 	return a+b+c+d+e+f;
// }

int mult(int a=1,int b=1,int c=1,int d=1,int e=1,int f=1){
	return a*b*c*d*e*f;
}
int main(){
	// cout<<sum(3,2)<<endl;
	// cout<<sum(4,5,1)<<endl;
	// cout<<sum(5,2,5,1)<<endl;
	// cout<<sum(15,12,3,5,1)<<endl;
	cout<<mult(3,2)<<endl;
	cout<<mult(4,5,1)<<endl;
	cout<<mult(5,2,5,1)<<endl;
	cout<<mult(15,12,3,5,1)<<endl;





	return 0;
}