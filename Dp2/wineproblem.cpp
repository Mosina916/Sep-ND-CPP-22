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

bottomup(){

}


int main(){
	int cost[]={2,3,5,1,4};
	int n=sizeof(cost)/sizeof(int);
	// cout<<wineproblem(cost,0,n-1,1)<<endl;
	int arr[100][100]={0};

	cout<<wineproblemtd(cost,0,n-1,1,arr)<<endl;

	for(int i=0;i<n;i++){
		for (int j = 0; j <n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}