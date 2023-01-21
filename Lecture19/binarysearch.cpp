#include <iostream>
using namespace std;
int binarysearchusingrec(int *arr,int s,int e,int key){
	// base case
	if(s>e){
		return -2;
	}


	// rec case
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		return binarysearchusingrec(arr,mid+1,e,key);
	}
	else{
		return binarysearchusingrec(arr,s,mid-1,key);
	}
}

int main(){
	int arr[]={2,4,5,9,16};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int index=binarysearchusingrec(arr,0,n-1,key);
	if(index<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<index<<endl; 
	}
	
	


	return 0;
}