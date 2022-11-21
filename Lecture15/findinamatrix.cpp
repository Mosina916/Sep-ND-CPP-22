#include<iostream>
using namespace std;

bool findinmatrix(int arr[4][3],int key,int trows,int tcols){
	for(int i=0;i<=trows-1;i++){
		for(int j=0;j<=tcols-1;j++){
		if(arr[i][j]==key){
			cout<<key<<" is present at index "<<i<<" , "<<j<<endl;
			return true;

	}

	}

	}

	return false;
	
	
}
int main(){

	int arr[4][3]={
		{4,16,18},
		{1,3,6},
		{4,9,2},
		{6,13,14}
	};

	int rows=4;
	int cols=3;
	int key;
	cin>>key;//9
	if(findinmatrix(arr,key,rows,cols)==false){
		cout<<"key is not present"<<endl;
	}


// 2d array print

	// for(int i=0;i<=rows-1;i++){
	// 	for(int j=0;j<=cols-1;j++){
	// 	cout<<arr[i][j]<<" ";
	// }
	// cout<<endl;

	// }
	




	return 0;
}