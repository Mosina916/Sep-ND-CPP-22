#include<iostream>
using namespace std;
int main(){


	int a=10;
	int*aptr=&a;
	int**xptr=&aptr;
	int***mptr=&xptr;
	cout<<*(*(*mptr))<<endl;

	// cout<<*(*xptr)<<endl;

	// float f=70.34;
	// double d=76.234;
	// bool israining=true;

	// cout<<&a<<endl;
	// cout<<&f<<endl;
	// cout<<&d<<endl;
	// cout<<&israining<<endl;


	// to store address we use pointer

	// datatype*name=&variblename
	// int*aptr=&a;
	// float*fptr=&f;
	// double*dptr=&d;
	// bool*bptr=&israining;


	// cout<<*aptr<<endl;

	// cout<<a<<endl;
	// cout<<*fptr<<endl;
	// cout<<f<<endl;
	// cout<<*dptr<<endl;
	// cout<<d<<endl;
	// cout<<*bptr<<endl;
	// cout<<israining<<endl;








	return 0;
}