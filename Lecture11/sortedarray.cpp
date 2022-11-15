#include<iostream>
using namespace std;
void updatearr(int b[],int n){
	for(int i=0;i<n;i++){
		b[i]=b[i]+10;

	}

	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;//12,14,15,11,10
	

}
int main(){
	int arr[]={2,4,5,1,0};
	

	
	return 0;
}

