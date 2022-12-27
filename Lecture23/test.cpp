#include<iostream>
using namespace std;
int main(){
	// // sma
	// int x;
	// x=10;
	// cout<<x<<endl;

	// dma
	// int*ptr=new int;//900
	// *ptr=10;
	// cout<<*ptr<<endl;
	// delete ptr;
	// ptr=NULL;


	// float*ptr=new float;//900
	// *ptr=34.543;
	// cout<<*ptr<<endl;
	// cout<<ptr<<endl;

	// char*ptr=new char;//900
	// *ptr='A';
	// cout<<*ptr<<endl;
	// cout<<(void*)ptr<<endl;


	// int arr[10];
	int*ptr=new int[10];

	for(int i=0;i<=9;i++){
		cin>>ptr[i];
	}


	for(int i=0;i<=9;i++){
		cout<<ptr[i]<<" ";
	}

	cout<<endl;

	delete[]ptr;
	ptr=NULL;







	return 0;
}