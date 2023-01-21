#include <iostream>
using namespace std;
int co=0;
void subseuqnecesofin(char in[],int i,char out[],int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		co++;
		return;

	}


	// rec 
	// without 
	// f("bc")
	subseuqnecesofin(in,i+1,out,j);
    // with a
	out[j]=in[i];
	subseuqnecesofin(in,i+1,out,j+1);

}
int main(){
	char in[1000];
	cin>>in;
	char out[1000];
	subseuqnecesofin(in,0,out,0);
	cout<<co<<endl;




	return 0;
}
