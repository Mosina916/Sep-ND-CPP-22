#include<iostream>
using namespace std;
int main(){
	int arr[]={4,1,2,0,3};
	int n=sizeof(arr)/sizeof(int);
	int j;

	cout<<"Before insertion sort"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// insertion sort
	for(int i=1;i<n;i++){
		int curr=arr[i];
		
		for(j=i-1;j>=0;j--){
			if(curr<arr[j]){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=curr;
	}

	cout<<"after insertion sort"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}