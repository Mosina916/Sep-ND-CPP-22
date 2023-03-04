#include<iostream>
using namespace std;
// 2d dp
// int mincost(int costmatrix[4][4],int i,int j){
// 	// base case
// 	if(i==0 &&j==0){
// 		return costmatrix[i][j];
// 	}
// 	if(j<0 ||i<0){
// 		return INT_MAX;
// 	}

// 	// rec case
// 	return min(mincost(costmatrix,i-1,j),mincost(costmatrix,i,j-1))+costmatrix[i][j];

// }
int mincosttd(int costmatrix[4][4],int i,int j,int arr[100][100]){
	// base case
	if(i==0 &&j==0){
		return arr[i][j]=costmatrix[i][j];
	}
	if(j<0 ||i<0){
		return INT_MAX;
	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}

	// rec case
	return arr[i][j]=min(mincosttd(costmatrix,i-1,j,arr),mincosttd(costmatrix,i,j-1,arr))+costmatrix[i][j];

}
int bottomup( int costmatrix[4][4],int i,int j){
	int arr[100][100];
	// arr[0][0]=costmatrix[0][0];
	for(int a=0;a<=i;a++){
		for(int b=0;b<=j;b++){
		if(a==0 and b==0){
		arr[a][b]=costmatrix[a][b];

	}
	else if(a==0){
		arr[a][b]=costmatrix[a][b]+arr[a][b-1];

	}
	else if(b==0){
		arr[a][b]=costmatrix[a][b]+arr[a-1][b];

	}
	else{
		arr[a][b]=min(arr[a-1][b],arr[a][b-1])+costmatrix[a][b];
	}
	}

	}
		for (int l = 0; l <=i; ++l)
	{
		for(int m=0;m<=j;m++){
			cout<<arr[l][m]<<" ";

		}
		cout<<endl;
	}


	return arr[i][j];
	
	
}

int main(){
	int costmatrix[4][4]={
		{3,1,6,2},
		{4,3,7,1},
		{0,2,3,4},
		{2,2,4,1}
	};

	cout<<bottomup(costmatrix,2,3)<<endl;

	// int arr[100][100];

	// for (int i = 0; i <100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		arr[i][j]=-1;

	// 	}
	// }
	// cout<<mincosttd(costmatrix,2,3,arr)<<endl;
	// for (int i = 0; i <=2; ++i)
	// {
	// 	for(int j=0;j<=3;j++){
	// 		cout<<arr[i][j]<<" ";

	// 	}
	// 	cout<<endl;
	// }

	// cout<<mincost(costmatrix,2,3)<<endl;

	return 0;
}