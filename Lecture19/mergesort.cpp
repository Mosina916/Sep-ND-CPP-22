#include <iostream>
using namespace std;
void mergetwosortedarray(int *arr,int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;
	int temp[1000];

// loop
	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		k++;
		i++;

	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}

	}
	// agar i==n tou pehli array khatamn ho gayi hai
	// 2nd array k as it is element daalo
	while(j<=e){
		temp[k]=arr[j];
	k++;
	j++;

	}


	// agar j==m tou dusri array khatamn ho gayi hai
	// ist array k as it is element daalo

	while(i<=mid){
		temp[k]=arr[i];
	k++;
	i++;

	}


	// copy temp to arr
	for(int p=s;p<=e;p++){
		arr[p]=temp[p];

	}
	


	// for(int l=0;l<k;l++){
	// 	cout<<temp[l]<<" ";
	// }

	// cout<<endl;
	
	

}

void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// rec case
	// step 1:calcualte mid
	int mid=(s+e)/2;
	// step 2: divide in 2 parts through mid and sort them
	mergesort(arr,s,mid);//2 3 4
	mergesort(arr,mid+1,e);
	// step 3 merge two sorted parts // 
	mergetwosortedarray(arr,s,e);
}

int main(){
	int arr[]={4,3,2,5,1};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	


	return 0;
}