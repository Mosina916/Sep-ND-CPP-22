#include<iostream>
using namespace std;
int main(){
	// int intial=0;
	// int final=300;
	// int step=20;

	int intial,step,final;
	cin>>intial>>step>>final;

	int f=intial;//0

// loop
	while(f<=final){
		// int c=(5/9)*(f-32);
		// float c=((5)*(f-32))/(9*1.0);

		int c=(5)*(f-32)/9;

	cout<<f<<'\t'<<c<<endl;
	f=f+step;//20

	}


	





	return 0;
}