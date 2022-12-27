#include<iostream>
using namespace std;
// void spiralprint(int arr[5][3],int trows,int tcols){
	// void spiralprint(int arr[3][5],int trows,int tcols){
	
void spiralprint(int arr[4][4],int trows,int tcols){
	int sr=0;
	int sc=0;
	int ec=tcols-1;
	int er=trows-1;
	while(sr<=er and sc<=ec){
		// pehla row
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;
	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;
	// last row
	if(sr<=er){
			for(int i=ec;i>=sc;i--){
		cout<<arr[er][i]<<" ";
	}
	er--;

	}
	// ist col
	if(sc<=ec){
		for(int j=er;j>=sr;j--){
		cout<<arr[j][sc]<<" ";
	}
	sc++;
	}
	}
	
	

}
int main(){
	int arr[4][4]={
		{3,6,9,4},
		{5,8,2,3},
		{0,9,6,2},
		{4,13,16,18}
	};

	// int arr[3][5]={
	// 	{3,6,9,4,6},
	// 	{5,8,2,3,8},
	// 	{0,9,6,2,3},
		
	// };

	// int arr[5][3]={
	// 	{3,6,9},
	// 	{5,8,2},
	// 	{0,9,6},
	// 	{4,5,3},
	// 	{3,5,4}
		
	// };


	

	int trows=4;
	int tcols=4;
	// int trows=3;
	// int tcols=5;
	// int trows=5;
	// int tcols=3;
	spiralprint(arr,trows,tcols);




	return 0;
}