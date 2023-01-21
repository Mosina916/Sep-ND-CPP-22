#include <iostream>
using namespace std;
int digitssum(int n){//5

	// base case
	if(n==0){
		return 0;
	}
	
	// recursive case
	// return n%10+digitssum(n/10);
	return digitssum(n/10)+n%10;

	

}
int main(){
	int n;
	cin>>n;
	cout<<digitssum(n)<<endl;
	


	return 0;
}