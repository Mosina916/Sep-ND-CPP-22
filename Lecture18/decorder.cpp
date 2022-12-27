#include <iostream>
using namespace std;
// print n to 1
void dec(int n){
	// base case
	if(n==0){
		return;
	}

	// rec case
	cout<<n<<" ";
	dec(n-1);
}

void inc(int n){
	// base case
	if(n==0){
		return;
	}

	// rec case
	inc(n-1);
	cout<<n<<" ";
	
}
int main(){
	int n;
	cin>>n;//5

	// dec(n);
	inc(n);


	return 0;
}