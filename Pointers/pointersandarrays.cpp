#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for (int i = 0; i <5; ++i)
	{
		// cin>>arr[i];
		cin>>*(arr+i);
	}
	

	for (int i = 0; i <5; ++i)
	{
		// cout<<arr[i]<<" ";
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;

	// cout<<arr<<endl;

	// cout<<&arr[0]<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;
	// cout<<&arr[3]<<endl;
	// cout<<&arr[4]<<endl;




	return 0;
}