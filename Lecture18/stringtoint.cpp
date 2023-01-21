#include <iostream>
using namespace std;
int stringtoint(string s,int len){
	// base case
	if(len==0){
		return 0;
	}


	// rec case
	char ch=s[len-1];
	// now covert char to int
	int no=ch-'0';//'6'-'0'-->6
	return stringtoint(s,len-1)*10+no;//4396
}
int main(){
	string s;
	cin>>s;//"4396"+100
	int len=s.length();
	cout<<stringtoint(s,len)<<endl;


	return 0;
}