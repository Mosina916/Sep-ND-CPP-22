#include <iostream>
using namespace std;
bool check7presentornot(int arr[],int n){
	// base case
	if(n==0){
		return false;
	}


	// rec case
	if(arr[0]==7){
		return true;
	}
	return check7presentornot(arr+1,n-1);
}


int firstindexof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return -3;
	}


	// rec case
	if(arr[i]==7){
		return i;
	}

	return firstindexof7(arr,n,i+1);


}
int lastindex(int *arr,int n,int i){
	// base case
	if(i==-1){
		return -10;
	}


	// rec case
	if(arr[i]==7){
		return i;

	}
	return lastindex(arr,n,i-1);

}
bool ispresent=false;
void allindicesof7(int *arr,int n,int i){
	// base case
	if(i==n){
		// tou mujhe kaam nahi karna
		return;
	}


	// rec case
	if(arr[i]==7){
		ispresent=true;
		cout<<i<<" ";
	}
	allindicesof7(arr,n,i+1);

}

int main(){
	int arr[]={2,3,4,7,9,7,7,4,8};
	// int arr[]={2,3,4};
	int n=sizeof(arr)/sizeof(int);



	allindicesof7(arr,n,0);
	if(ispresent==false){
		cout<<"7 is not present"<<endl;
	}

	// int index=lastindex(arr,n,n-1);
	// if(index<0){
	// 	cout<<"7 is not present"<<endl;
	// }
	// else{
	// 	cout<<"7 is present at index "<<index<<endl;
	// }
	// int index=firstindexof7(arr,n,0);
	// if(index<0){
	// 	cout<<"7 is not present"<<endl;
	// }
	// else{
	// 	cout<<"7 is present at index "<<index<<endl;
	// }
	// if(check7presentornot(arr,n)==true){
	// 	cout<<"7 is present"<<endl;
	// }
	// else{
	// 	cout<<"7 is not present"<<endl;

	// }


	return 0;
}