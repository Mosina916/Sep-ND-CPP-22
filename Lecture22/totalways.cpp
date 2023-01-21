#include<iostream>
using namespace std;
int totalways(int i,int j){
	// base case
	if(i==0 and j==0){
		return 1;
	}


	// rec case
	int ans=0;
	for(int k=i-1;k>=0;k--){
		ans=ans+totalways(k,j);
	}

	for(int k=j-1;k>=0;k--){
		ans=ans+totalways(i,k);
	}

	return ans;

	
}

int main()
{
	int i,j;
	cin>>i>>j;
	cout<<totalways(i,j)<<endl;
	
	return 0;
}