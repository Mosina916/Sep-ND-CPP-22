#include <iostream>
using namespace std;
int main(){
	int a[7]={5,7,9};
	int b[4]={2,4,8,10};


	int m=3;
	int n=4;

	int i=m-1;//2
	int j=n-1;
	int k=m+n-1;


// loop
	while(i>=0 and j>=0){
		if(b[j]>a[i]){
		a[k]=b[j];
		k--;
		j--;
	}
	else{
		a[k]=a[i];
		k--;
		i--;
	}
	

	}


	// agar 2nd array bacch rahi hai

// loop
	while(j>=0){
		a[k]=b[j];
		j--;
		k--;

	}

	// print

	for(int l=0;l<=m+n-1;l++){
		cout<<a[l]<<" ";
	}

	cout<<endl;
	

	
		


	


	

	return 0;
}