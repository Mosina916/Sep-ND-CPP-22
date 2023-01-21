#include <iostream>
using namespace std;
// void bubblesortrec(int *arr,int n,int i){
// 	// base case
// 	if(i>n-2){
// 		return;
// 	}

// 	// rec case
// 	for(int j=0;j<=n-2-i;j++){
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j],arr[j+1]);
				
// 			}

// 		}

// 		bubblesortrec(arr,n,i+1);

// }

void bubblesortpurerec(int *arr,int n,int i,int j){
	// base case
	if(i>n-2){
		return;
	}

	// rec case
	if(j>n-2-i){
		bubblesortpurerec(arr,n,i+1,0);
		

	}
	else{
		if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				
			}
			bubblesortpurerec(arr,n,i,j+1);

	}
	// for(int j=0;j<=n-2-i;j++){
	// 		if(arr[j]>arr[j+1]){
	// 			swap(arr[j],arr[j+1]);
				
	// 		}

	// 	}

		// bubblesortpurerec(arr,n,i+1);

}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	// bubblesortrec(arr,n,0);
	bubblesortpurerec(arr,n,0,0);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return 0;
}