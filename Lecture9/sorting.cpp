#include <iostream>
using namespace std;
int main(){
	int arr[]={12,5,4,3,3,1,0,0,0,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);//5

	// for (int j = 0; j <=3;j++)
	// {
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);

	// 	}
	// }

	// 4 3 2 1 5
	cout<<"Before BUBBLE SORT"<<endl;

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	// optimised bubble sort

	for(int i=0;i<=n-2;i++){
		bool kyaabhitakkoiswaphuva=false;
		for(int j=0;j<=n-2-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				kyaabhitakkoiswaphuva=true;

			}

		}
		if(kyaabhitakkoiswaphuva==false){
			break;
		}

	}


<<<<<<< HEAD
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				
			}

		}
		
	}
=======
	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-2-i;j++){
	// 		if(arr[j]>arr[j+1]){
	// 			// swap(arr[j],arr[j+1]);

	// 			// swap(arr[j+1],arr[j]);

	// 			// using 3rd variable
	// 			// int c=arr[j];
	// 			// arr[j]=arr[j+1];
	// 			// arr[j+1]=c;

	// 			// without using 3rd variable
	// 			// arr[j]=arr[j]+arr[j+1];
	// 			// arr[j+1]=arr[j]-arr[j+1];
	// 			// arr[j]=arr[j]-arr[j+1];


	// 			// swap in one line
	// 			arr[j]=(arr[j]+arr[j+1])-(arr[j+1]=arr[j]);
				
	// 		}

	// 	}
	// }
>>>>>>> de98a2e82d9c6b6029e3fd4bbb70b13878796f1c




	cout<<"After BUBBLE SORT"<<endl;

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	

	return 0;
}