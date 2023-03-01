#include<iostream>
using namespace std;
// simple rec
int minstepsto1(int n){//12
	// base case
	if(n==1){
		return 0;
	}

	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1(n-1);//4
	if(n%2==0){
		y=minstepsto1(n/2);//2

	}
	if(n%3==0){
		z=minstepsto1(n/3);//2
	}
	return min(x,min(y,z))+1;

}

// dp topdown

int minstepsto1(int n,int *arr){//12
	// base case
	if(n==1){
		return arr[n]=0;
	}

	// rec case
	if(arr[n]!=-1){
		return arr[n];
	}
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1(n-1,arr);//4
	if(n%2==0){
		y=minstepsto1(n/2,arr);//2

	}
	if(n%3==0){
		z=minstepsto1(n/3,arr);//2
	}
	return  arr[n]=min(x,min(y,z))+1;

}


int bottup(int n){
	int *arr=new int[n+1];
	arr[1]=0;

	for(int i=2;i<=n;i++){
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=arr[i-1];//1
	if(i%2==0){
		op2=arr[i/2];//INT_MAx
	}
	if(i%3==0){
		op3=arr[i/3];//0
	}
	arr[i]=min(op1,min(op2,op3))+1;

	}

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	return arr[n];

}

int main(){ 
	int n;
	cin>>n;
	cout<<bottup(n)<<endl;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<minstepsto1(n,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	cout<<minstepsto1(n)<<endl;
	

	return 0;
}