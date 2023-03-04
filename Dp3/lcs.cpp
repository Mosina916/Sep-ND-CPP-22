#include<iostream>
using namespace std;
// 2d dp
// int lcs(char s1[100],char s2[100],int i,int j){
// 	// base case
// 	if(s1[i]=='\0'||s2[j]=='\0'){
// 		return 0;
// 	}


// 	// rec case
// 	if(s1[i]==s2[j]){
// 		return arr[i][j]=1+lcs(s1,s2,i+1,j+1);
// 	}
// 	else{
// 		return max(lcs(s1,s2,i,j+1),lcs(s1,s2,i+1,j));
// 	}
// }

// int lcs(string s1,string s2,int i,int j){
// 	// base case
// 	if(i<0||j<0){
// 		return 0;
// 	}


// 	// rec case
// 	if(s1[i-1]==s2[j-1]){
// 		return 1+lcs(s1,s2,i-1,j-1);
// 	}
// 	else{
// 		return max(lcs(s1,s2,i,j-1),lcs(s1,s2,i-1,j));
// 	}
// }

int lcstd(string s1,string s2,int i,int j,int arr[100][100]){
	// base case
	if(i<0||j<0){
		return 0;
	}
	if(i==0||j==0){
		return arr[i][j]=0;

	}

	if(arr[i][j]!=0){
		return arr[i][j];
	}


	// rec case
	if(s1[i-1]==s2[j-1]){
		return arr[i][j]=1+lcstd(s1,s2,i-1,j-1,arr);
	}
	else{
		return arr[i][j]=max(lcstd(s1,s2,i,j-1,arr),lcstd(s1,s2,i-1,j,arr));
	}


}


int main(){
	// char s1[100];//"aca"
	// char s2[100];//"adba"
	// s1.length();
	// s2.
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	int arr[100][100];
	// memset(arr,-1,sizeof(arr));
	// int arr[100][100];

	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			arr[i][j]=0;

		}
	}
		cout<<lcstd(s1,s2,s1.length(),s2.length(),arr)<<endl;

	// cout<<lcs(s1,s2,s1.length(),s2.length())<<endl;

	// cout<<lcs(s1,s2,0,0)<<endl;
			for (int i = 0; i <=s1.length(); ++i)
	{
		for(int j=0;j<=s2.length();j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}


	return 0;
}