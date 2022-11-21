#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int i=2;

// loop
	while(i<n){
		if(n%i==0){
			cout<<"not prime"<<endl;
			return 0;

	}
	else{
		i=i+1;//5

	}

	


	}
	
	if(i==n){
		cout<<"prime"<<endl;
	}




	return 0;
}