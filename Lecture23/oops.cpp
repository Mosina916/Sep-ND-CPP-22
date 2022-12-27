#include<iostream>
using namespace std;
class human{
public:
	string name;
	int phoneno;
	string address;
	human(){

	}

	human(string s){
	}

};
int main(){
	

	// whenever an object is created constructor is called
	human p1;
	human p2("abc");
	// p1.name="abc";
	// p1.phoneno=234565;
	// p1.address="sgdtf sdhfg";
	// cout<<p1.name<<endl;
	// cout<<p1.phoneno<<endl;
	// cout<<p1.address<<endl;


	return 0;
}