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
	int n;
	cin>>n;//39
	int arr[10000]={0};
	primesieve(arr,n);
	for(int i=0;i<=n;i++){
		if(arr[i]==1){
			cout<<i<<" ";
		}
	}
	cout<<endl;


	return 0;
}