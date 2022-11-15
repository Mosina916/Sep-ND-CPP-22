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
int main(){
	int n;
	// 5!=5*4*3*2*1
	cin>>n;///5
	
	cout<<fact(n)<<endl;
	


	

	return 0;
}

