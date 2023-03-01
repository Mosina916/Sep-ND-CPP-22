#include<iostream>
using namespace std;
// normal rec
int fibo(int pos){
	// base case
	if(pos==0||pos==1){
		return pos;
	}


	// rec case
	return fibo(pos-1)+fibo(pos-2);

}

// dp-->top down
int fibodp(int pos,int dp[]){//1
	if(pos==0||pos==1){
		return dp[pos]=pos;
	}
	if(dp[pos]!=-1){
		return dp[pos];
	}


	// rec case
	return dp[pos]=fibodp(pos-1,dp)+fibodp(pos-2,dp);

}

// bottomup

int fibobu(int pos){
	int *dp=new int[pos+1];
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=pos;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}

	// for (int i = 0; i <=pos; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	cout<<endl;
	return dp[pos];

}

int main(){ 
	int pos;
	cin>>pos;//5
	
	cout<<fibobu(pos)<<endl;
	
	// int arr[pos+1];
	int *dp=new int[pos+1];
	for (int i = 0; i <=pos; ++i)
	{
		dp[i]=-1;
	}
	cout<<fibodp(pos,dp)<<endl;
	cout<<fibo(pos)<<endl;

	// for (int i = 0; i <=pos; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }


	return 0;
}