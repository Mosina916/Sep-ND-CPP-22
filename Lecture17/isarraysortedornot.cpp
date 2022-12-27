#include <iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){//5

	// base case
	if(n==1){
		return true;
	}
	
	
	// recursive case
	if(isarraysortedornot(arr,n-1) and arr[n-2]<=arr[n-1]){
		return true;
	}
	return false;
	
	

}

bool isarraysortedornot2(int *arr,int n){//5

	// base case
	if(n==1){
		return true;

	}
	
	
	// recursive case
	if(isarraysortedornot2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
	
	

}
bool isarraysortedornot3(int *arr,int n,int i){//5

	// base case
	if(i==n-1){
		return true;

	}
	
	
	
	// recursive case
	if(isarraysortedornot3(arr,n,i+1) and arr[i]<=arr[i+1]){
		return true;
	}
	return false;
	
	

}
int main(){
	int arr[]={3,5,6};
	// int arr[]={0,1,1,13,5,6,6,6,6,6,8};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysortedornot3(arr,n,0)==true){
		cout<<"sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;

	}
	
	


	return 0;
}