#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//9
	//=================================
	int i=2;
// loop
	while(i<n){
		if(n%i==0){
			cout<<"not prime"<<endl;
			// return 0;
			break;
	}
	else{
		i=i+1;//3
	}
	}
	if(i==n){
		cout<<"prime"<<endl;
	}
	//=================================




	return 0;
}