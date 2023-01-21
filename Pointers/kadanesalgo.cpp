#include<iostream>
using namespace std;
int main(){
	int arr[]={-2,3,6,4,7,-90,-100,7,8};
	int n=sizeof(arr)/sizeof(int);
	int ms=INT_MIN;
	int cs=0;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		ms=max(ms,cs);
		if(cs<0){
			cs=0;
		}
	}

	cout<<ms<<endl;



	return 0;
}