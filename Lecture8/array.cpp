#include<iostream>
using namespace std;
int main(){
	// int s1,s2,s3,s4,s5;
	// s1=60;
	// s2=69;
	// s3=78;
	// s4=79;
	// s5=24;

	// syntax

	// datatype nameofarray[size];
	// int arr[100];
	// char b[100];
	// int arr[5];
	// arr[0]=60;
	// arr[1]=69;
	// arr[2]=78;
	// arr[3]=79;
	// arr[4]=24;

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	// int n=5;


	// for(int i=0;i<=4;i++){
	// 	cin>>arr[i];

	// }
	


	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<endl;

	// }

	// int arr[5]={4,3,6,1,2};

	// int arr[]={4,3,6,1,2};
	// int n=sizeof(arr)/sizeof(int);


	// int arr[5]={4,3};

	// char arr[]={'A','B','C'};
	// int n=sizeof(arr)/sizeof(char);
	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<endl;

	// }

	// int arr[5]={4,3};

	// int arr[5]={4};

	// int arr[5]={0};
 
	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<endl;

	// }


	// int arr[1000000];
	int n;
	cin>>n;//10^6
	int arr[n];

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;



	


	
	


	return 0;
}