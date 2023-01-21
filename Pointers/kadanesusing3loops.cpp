#include<iostream>
using namespace std;
int main(){
	int arr[]={-2,3,6,4,7,-90,-100,7,8};
	int n=sizeof(arr)/sizeof(int);
	int ms=INT_MIN;
	int l;
	int r;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0; 
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];

			}
			if(sum>ms){//15 >7
				ms=max(ms,sum);//15
				l=i;
				r=j;

			}
			


		}
	}
	cout<<ms<<endl;

	for(int x=l;x<=r;x++){
		cout<<arr[x]<<" ";
	}

	cout<<endl;




	return 0;
}