#include<iostream>
using namespace std;
int main(){
	int arr[1000000];
	int n;
	cin>>n;//5
	

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	int largest=arr[0];//6

	for(int i=1;i<n;i++){
		if(arr[i]>largest){
		largest=arr[i];
	}

	}


	cout<<largest<<endl;
	




	


	
	


	return 0;
}