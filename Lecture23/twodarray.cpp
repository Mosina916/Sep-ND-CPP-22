#include<iostream>
using namespace std;
int main(){
	
	int**arr=new int*[3];

	for(int i=0;i<3;i++){
		arr[i]=new int[4];
	}


	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;


	for(int i=0;i<3;i++){
		delete[] arr[i];
		arr[i]=NULL;
	}


	delete[]arr;
	arr=NULL;


	





	return 0;
}