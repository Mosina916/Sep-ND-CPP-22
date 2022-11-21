 #include<iostream>
#include<cstring>
using namespace std;
// string dubpli(string &s){
// 	// base. case
// 	if(s.length()==1){
// 		return s;
// 	}



// 	// rec case
// 	string p=s.substr(1);
	
// 	string k="";
	
// 	if(s[0]==s[1]){
// 		k=k+s[0];
// 		k=k+'*';
// 		return k+dubpli(p);
// 	}
// 	else{
// 		return s[0]+dubpli(p);
// 	}
// }

string dubpli(string s,int j){
	// base. case
	if(j==0){
		string k="";
		return k+s[0];
	}
	


	// rec case
	
	string k="";
	if(s[j]==s[j-1]){
		k=k+'*';
		k=k+s[j];
		return dubpli(s,j-1)+k;
	}
	else{
		k=k+s[j];
		return dubpli(s,j-1)+k;
	}
}
int main() {

	// string s="abc";
	// // s=s+"abc";
	// s="abc"+s;
	string s;
	cin>>s;
	// cout<<dubpli(s)<<endl;
	// cout<<s<<endl;
	// string s;
	// cin>>s; 
	int n=s.length();//5
	// 	cout<<dubpli(s)<<endl;
	cout<<dubpli(s,n-1)<<endl;
	return 0;
}