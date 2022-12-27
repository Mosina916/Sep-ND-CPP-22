#include <iostream>
using namespace std;
void mergetwosortedarray(int *arr1,int n,int *arr2,int m){
	int i=0;
	int j=0;
	int k=0;
	int temp[1000];

// loop
	while(i<n and j<m){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		k++;
		i++;

	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;
	}

	}
	// agar i==n tou pehli array khatamn ho gayi hai
	// 2nd array k as it is element daalo
	while(j<m){
		temp[k]=arr2[j];
	k++;
	j++;

	}


	// agar j==m tou dusri array khatamn ho gayi hai
	// ist array k as it is element daalo

	while(i<n){
		temp[k]=arr1[i];
	k++;
	i++;

	}

	for(int l=0;l<k;l++){
		cout<<temp[l]<<" ";
	}

	cout<<endl;
	
	

}

int main(){
	int arr1[]={2,4,6};
	int n=3;
	int arr2[]={1,3,9,16};
	int m=4;
	mergetwosortedarray(arr1,n,arr2,m);

	


	return 0;
}