#include<iostream>
using namespace std;
int binarysearchrec(int arr[],int s,int e,int key){
	// base case 
	if(s>e){
		return -1;

	}
	// rec case
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		return binarysearchrec(arr,mid+1,e,key);
	}
	else{
		return binarysearchrec(arr,s,mid-1,key);

	}

}

int main(){
	int arr[]={3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int index=binarysearchrec(arr,0,n-1,key);
	if(index!=-1){
		cout<<"key is present at index "<<index<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}
	

	return 0;
	
}