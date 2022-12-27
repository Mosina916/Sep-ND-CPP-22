#include <iostream>
using namespace std;
int countdigits(int n){//5

	// base case
	if(n==0){
		return 0;
	}
	
	
	// recursive case
	// return n%10+digitssum(n/10);
	return countdigits(n/10)+1;

	

}
int main(){
	// assume n>0
	int n;
	cin>>n;

	// if(n==0){
	// 	cout<<1<<endl;
	// }
	// else{
		cout<<countdigits(n)<<endl;//546

	// }
	
	


	return 0;
}