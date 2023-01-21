#include<iostream>
using namespace std;

int main(){

	int no;
	int count=0;
	cin>>no;//6

	while(no>0){
		if((no&1)==1){//6&1
		// ld is 1
		count=count+1;//1
	}
	no=no>>1;//6>>1-->3

	}

	cout<<count<<endl;

	return 0;
}