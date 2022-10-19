#include <iostream>
using namespace std;
int main(){
	int arr[]={3,1,6,4,2};
	int n=sizeof(arr)/sizeof(int);//5

	int key;
	cin>>key;//16
	int i;

	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
		cout<<"key is present at index "<<i<<endl;
		break;
		// return 0;

	}

	}


		// cout<<"key is not present"<<endl;
	

	if(i==n){
		cout<<"key is not present"<<endl;
	}
	









	return 0;
}