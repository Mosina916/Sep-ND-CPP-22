#include <iostream>
using namespace std;
int sumofelements(int *arr,int n){//5

	// base case
	if(n==0){
		return 0;

	}
	// if(n==1){
	// 	return arr[0];
	// }
	
	
	// recursive case
	return sumofelements(arr,n-1)+arr[n-1];
	
	

}

int sumofelements2(int *arr,int n){//5

	// base case
	if(n==0){
		return 0;

	}
	// if(n==1){
	// 	return arr[0];
	// }
	
	
	// recursive case
	return sumofelements2(arr+1,n-1)+arr[0];
	
	

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

int  sumofelements3(int *arr,int n,int i){//5

	// base case
	if(i==n){
		return 0;

	}
	
	
	
	// recursive case
	return sumofelements3(arr,n,i+1)+arr[i];
	
	

}
int main(){
	int arr[]={3,5,6,3};
	// int arr[]={0,1,1,13,5,6,6,6,6,6,8};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofelements3(arr,n,0)<<endl;
	
	
	


	return 0;
}