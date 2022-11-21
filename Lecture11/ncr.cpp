#include<iostream>
using namespace std;
int  fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
		ans=i*ans;//120
	}

	return ans;

	// cout<<ans<<endl;

}


int ncr(int n,int r){
	int finalans=fact(n)/(fact(r)*fact(n-r));
	return finalans;

}
int main(){
	int n,r;
	cin>>n>>r;///5
	cout<<ncr(n,r)<<endl;

	return 0;
}

