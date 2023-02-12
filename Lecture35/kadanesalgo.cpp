#include <iostream>
#include <cmath>
using namespace std;
// void primesieve(int arr[10000],int n){
// 	arr[2]=1;
// 	for(int i=3;i<=n;i=i+2){
// 		arr[i]=1;
// 	}

// 	for(int i=3;i<=n;i=i+2){
// 		if(arr[i]!=0){
// 			for(int j=i*2;j<=n;j=j+i){
// 			arr[j]=0;
// 		}

// 		}
		
// 	}

// }

void primesieve(int arr[10000],int n){
	arr[2]=1;
	for(int i=3;i<=n;i=i+2){
		arr[i]=1;
	}

	// for(int i=3;i<=n;i=i+2){
	// for(int i=3;i<=n/2;i=i+2){
	for(int i=3;i<=sqrt(n);i=i+2){
		if(arr[i]!=0){
			for(int j=i*i;j<=n;j=j+i){
			arr[j]=0;
		}

		}
		
	}

}
int main(){
	// int arr[]={2,-3,4,5,-13};
	int arr[]={-2,3,-4,-5,-13};
	int n=sizeof(arr)/sizeof(int);

// // for only postive and mix numbers
// 	int cs=0;
// 	int ms=INT_MIN;
// 	for(int i=0;i<n;i++){
// 		cs=cs+arr[i];
// 		if(cs<0){
// 			cs=0;
// 		}
// 		ms=max(cs,ms);
// 	}
// 	cout<<ms<<endl;

	// {-2,3,-4,-5,-13};
	// for all numbers
	int cs=0;
	int ms=INT_MIN;
	for(int i=0;i<n;i++){
		cs=cs+arr[i];
		ms=max(cs,ms);
		if(cs<0){
			cs=0;
		}
		
	}
	cout<<ms<<endl;
	return 0;
}