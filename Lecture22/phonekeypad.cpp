#include<iostream>
using namespace std;
int c=0;
char arr[10][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekeypad(char inp[100],char out[100],int i,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		c++;
		return;
	}


	// rec case
	char ch=inp[i];//'2'
	int index=ch-'0';
	for(int k=0;arr[index][k]!='\0';k++){
		out[j]=arr[index][k];
		phonekeypad(inp,out,i+1,j+1);
	}


}
int main()
{
	char inp[100];
	char out[100];
	cin>>inp;//"23"

	phonekeypad(inp,out,0,0);

	cout<<c<<endl;
	return 0;
}