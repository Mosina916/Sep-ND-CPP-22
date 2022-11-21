#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//8

	for(int n=2;n<=no;n++){
		//=================================
	int i=2;
// loop
	while(i<n){
		if(n%i==0){
			// cout<<"not prime"<<endl;
			// return 0;
			break;
	}
	else{
		i=i+1;//3
	}
	}
	if(i==n){
		cout<<n<<" ";
	}
	//=================================

	}
	cout<<endl;
	

	


	
	return 0;
}