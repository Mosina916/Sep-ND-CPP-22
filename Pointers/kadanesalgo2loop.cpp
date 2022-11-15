#include<iostream>
using namespace std;
int main(){
	int arr[]={-2,3,6,4,7,-90,-100,7,8};
	int n=sizeof(arr)/sizeof(int);
	int csum[1000];
	csum[0]=0;
	for(int l=1;l<=n;l++){
		csum[l]=csum[l-1]+arr[l-1];
	}
	int ms=INT_MIN;
	int l;
	int r;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sumfromitij=csum[j+1]-csum[i]; 
			if(sumfromitij>ms){//15 >7
				ms=max(ms,sumfromitij);//15
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