#include<iostream>
using namespace std;
// 2d dp
int wineproblem(int cost[],int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}


	// rec case
	int op1=cost[l]*day+wineproblem(cost,l+1,r,day+1);
	int op2=cost[r]*day+wineproblem(cost,l,r-1,day+1);
	return max(op1,op2);
}

int wineproblemtd(int cost[],int l,int r,int day,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=0){
		return arr[l][r];
	}


	// rec case
	int op1=cost[l]*day+wineproblemtd(cost,l+1,r,day+1,arr);
	int op2=cost[r]*day+wineproblemtd(cost,l,r-1,day+1,arr);
	return arr[l][r]=max(op1,op2);

}

int bottomup(int cost[],int n){
	int arr[100][100]={0};
	// diagonal
	for(int i=0;i<n;i++){
		arr[i][i]=n*cost[i];
	}

	for(int i=n-2;i>=0;i--){//2
	for(int j=0;j<n;j++){
		if(j>i){
		int day=n-(j-i);
		int op1=day*cost[i]+arr[i+1][j];
		int op2=day*cost[j]+arr[i][j-1];
		arr[i][j]=max(op1,op2);

	}

	}
}


for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

return arr[0][n-1];
	




}


int main(){
	int cost[]={2,3,5,1,4};
	int n=sizeof(cost)/sizeof(int);
	cout<<bottomup(cost,n)<<endl;
	// cout<<wineproblem(cost,0,n-1,1)<<endl;
	// int arr[100][100]={0};

	// cout<<wineproblemtd(cost,0,n-1,1,arr)<<endl;

	// for(int i=0;i<n;i++){
	// 	for (int j = 0; j <n;j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	

	return 0;
}