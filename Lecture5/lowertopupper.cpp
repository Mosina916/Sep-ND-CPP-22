#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//B

	if(ch>='A' and ch<='Z'){
		cout<<"Uppercase"<<endl;
	}
	else if(ch>='a' and ch<='z'){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;
	}


	// if(ch>=65 and ch<=90){
	// 	cout<<"Uppercase"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;
	// }


	// isupper(ch)

	// islower(ch)

	if(isupper(ch)){
		cout<<"Uppercase"<<endl;

	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;

	}


	



	return 0;
}