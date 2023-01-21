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


	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				
			}

		}
		
	}




	cout<<"After BUBBLE SORT"<<endl;

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	

	return 0;
}