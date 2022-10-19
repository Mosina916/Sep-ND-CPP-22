#include <iostream>
using namespace std;
int main(){
	int arr[]={4,0,0,0,7,7,7,7,5,4,4,4,3,1,5,2};
	int n=sizeof(arr)/sizeof(int);//5

	cout<<"Before Selection SORT"<<endl;

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	for(int i=0;i<n-1;i++){

		int place=i;
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[place],arr[min]);


	}

	cout<<"After Selection SORT"<<endl;

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	


	

	return 0;
}