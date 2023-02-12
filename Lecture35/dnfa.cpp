#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[]={0,1,2,2,1,1,1,0,0,1,0,2,1,2,2,1,1,0,1,1,0,0,0,0,0,1,1};
	int n=sizeof(arr)/sizeof(int);
	int s=0,e=n-1,mid=0;

		while(mid<=e){
			if(arr[mid]==0){
			swap(arr[mid],arr[s]);
			s++;
			mid++;

		}
		else if(arr[mid]==1){
			mid++;

		}
		else{
			swap(arr[mid],arr[e]);
			e--;

		}


		}
		

		for (int i = 0; i <n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;




	return 0;
}