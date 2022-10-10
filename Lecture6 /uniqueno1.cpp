#include<iostream>
using namespace std;

int main(){

	int ans=0;
	int n,no;
	cin>>n;//7

	for(int i=1;i<=n;i++){
		cin>>no;//4 3 2 7
		ans=ans^no;//7


	}

	cout<<ans<<endl;
	

	






	return 0;
}