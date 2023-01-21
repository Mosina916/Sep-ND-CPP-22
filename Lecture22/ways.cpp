#include<iostream>
using namespace std;
int tw(int i,int j){ 
	// base case
	if(i==0||j==0){
		return 1;
	}


	// rec case
	return tw(i-1,j)+tw(i,j-1);
}

int main()
{
	int i,j;
	cin>>i>>j;
	cout<<tw(i,j)<<endl;
	
	return 0;
}