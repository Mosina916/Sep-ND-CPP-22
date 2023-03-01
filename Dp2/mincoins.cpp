#include<iostream>
using namespace std;
int mincoinstomakethisamount(int coins[],int amount,int tc){
	// base  case
	if(amount==0){
		return 0;
	}

	// rec case
	int fans=INT_MAX;
	for(int j=0;j<tc;j++){
		int bachaamount=amount-coins[j];//30-25-->5
	if(bachaamount>=0){
		int rans=mincoinstomakethisamount(coins,bachaamount,tc);
		if(rans<fans){
			fans=rans+1;//2
		}

	}

	}
	return fans;
}

int mincoinstomakethisamounttd(int coins[],int amount,int tc,int *arr){
	// base  case
	if(amount==0){
		return arr[amount]=0;
	}

	// calculate karne se pehle check
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}

	// rec case
	int fans=INT_MAX;
	for(int j=0;j<tc;j++){
		int bachaamount=amount-coins[j];//30-25-->5
	if(bachaamount>=0){
		int rans=mincoinstomakethisamounttd(coins,bachaamount,tc,arr);
		if( rans<fans){
			fans=rans+1;//2
		}

	}

	}
	return arr[amount]=fans;

}
int bottomup(int coins[],int amount,int tc){
	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}
	arr[0]=0;


	for(int curramount=1;curramount<=amount;curramount++){
		for(int j=0;j<tc;j++){
		int ramount=curramount-coins[j];//0
	if(ramount>=0){
		arr[curramount]=min(arr[ramount]+1,arr[curramount]);
	}

	}	
	}

	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
return arr[amount];


}
int main(){
	int amount;
	cin>>amount;//30
	int coins[]={1,3,5,10};
	// int coins[]={40,25,10,5};
	int tc=sizeof(coins)/sizeof(int);


	cout<<bottomup(coins,amount,tc)<<endl;



	// int *arr=new int[amount+1];
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }
	// cout<<mincoinstomakethisamounttd(coins,amount,tc,arr)<<endl;

	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// cout<<mincoinstomakethisamount(coins,amount,tc)<<endl;
	return 0;
}