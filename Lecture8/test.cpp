#include<iostream>
using namespace std;
int main(){
	int count=0;
	char ch;
	// loop
	// cin>>ch;//'h'
	ch=cin.get();
	while(ch!='$'){
		count++;//4
		// cin>>ch;//$
		ch=cin.get();//

	}

	cout<<count<<endl;



	return 0;
}