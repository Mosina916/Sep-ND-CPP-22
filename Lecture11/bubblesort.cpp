#include <iostream>
using namespace std;
int main(){
	int a[7]={5,7,9};
	int b[4]={2,4,8,10};


	int m=3;
	int n=4;
	int i=0;
	int j=m;

	while(i<n){
		a[j]=b[i];
		j++;
		i++;


	}
		


	// for (int j = 0; j <=3;j++)
	// {
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);

	// 	}
	// }

	// 4 3 2 1 5
	cout<<"Before BUBBLE SORT"<<endl;

	for(int i=0;i<=m+n-1;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;

// bubble sort

	for(int i=0;i<=m+n-2;i++){
		for(int j=0;j<=n+m-2-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);	
			}

		}
	}




	cout<<"After BUBBLE SORT"<<endl;

	for(int i=0;i<=m+n-1;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;



	

	return 0;
}