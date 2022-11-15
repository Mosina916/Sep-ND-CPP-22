#include<iostream>
using namespace std;
int main(){
	int a=10;
	float f=70.34;
	double d=76.234;
	bool israining=true;


	// datatype*name=&variblename
	// int*aptr=&a;
	// int*optr-=&a;
	int *aptr=&a,*optr=&a;
	float*fptr=&f;
	double*dptr=&d;
	bool*bptr=&israining;
	
	// cout<<aptr<<endl;
	// cout<<aptr+1<<endl;
	// cout<<aptr+2<<endl;
	// cout<<aptr+3<<endl;

	cout<<dptr<<endl;
	cout<<dptr+1<<endl;
	cout<<dptr+2<<endl;
	cout<<dptr+3<<endl;





	







	return 0;
}