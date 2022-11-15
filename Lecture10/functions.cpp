#include<iostream>
using namespace std;

// returntype name(){
// 	// task
// }

// with no return type and no arguments
void statement(){
	cout<<"hii"<<endl;
	cout<<"hello"<<endl;
	cout<<"coding"<<endl;
	cout<<"Blocks"<<endl;


}

// with return type but no arguments
// int promod(){
// 	int a,b;
// 	cin>>a>>b;
// 	int sum=a+b;

// 	return sum;
// 	// cout<<sum<<endl;
// }

// void promod(){
// 	int a,b;
// 	cin>>a>>b;
// 	int sum=a+b;
// 	cout<<sum<<endl;

// }
// no return type but with arguments
void fardeen(float f,int x){
	float mult=f*x;
	cout<<mult<<endl;

}
// with return type  and with arguments

int zaid(int a,int b){
	int sub=a-b;
	return sub;
}

// forward decleartion
int promod();


int main(){
	cout<<promod()<<endl;
	fardeen(6.6,3);
	cout<<zaid(6,10)<<endl;
	// promod();


	
	// for(int i=1;i<=5;i++){
	// 	cout<<"hii"<<endl;
	// cout<<"hello"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"Blocks"<<endl;


	// }
	// int a=10;
	// int b=90;


	// cout<<a<<endl;
	// cout<<b<<endl;
	// // name();//call invoke
	// statement();
	// cout<<"hii"<<endl;
	// cout<<"hello"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"Blocks"<<endl;



	// cout<<"hii"<<endl;
	// cout<<"hello"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"Blocks"<<endl;
	// statement();
	// cout<<a<<endl;
	// cout<<b<<endl;


	// cout<<a<<endl;
	// statement();
	// // cout<<"hii"<<endl;
	// // cout<<"hello"<<endl;
	// // cout<<"coding"<<endl;
	// // cout<<"Blocks"<<endl;
	// cout<<b<<endl;


	return 0;
}

int promod(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;

	return sum;
	// cout<<sum<<endl;
}