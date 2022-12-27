#include<iostream>
using namespace std;
void waveprint(int arr[4][3],int trows,int tcols){
	for(int colno=0;colno<=tcols-1;colno++){
		if(colno%2==0){
		// colno is even
		// downward
			for(int rowno=0;rowno<=trows-1;rowno++){
				cout<<arr[rowno][colno]<<" ";
			}

	}
	else{
		// colno is odd
		// upward
		for(int rowno=trows-1;rowno>=0;rowno--){
			cout<<arr[rowno][colno]<<" ";
		}


	}
	}
	
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
	waveprint(arr,rows,cols);
	cout<<endl;
	return 0;
}