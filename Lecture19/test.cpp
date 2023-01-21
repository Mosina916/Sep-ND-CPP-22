#include <iostream>
using namespace std;
string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
// void convertinwordform(int n){
// 	// base case
// 	if(n==0){
// 		return;
// 	}


// 	// rec case
	int digit=n%10;
	cout<<arr[digit]<<" ";
	convertinwordform(n/10);
// }


// inc 
void convertinwordforminc(int n){
	// base case
	if(n==0){
		return;
	}


	// rec case
	convertinwordforminc(n/10);
	int digit=n%10;
	cout<<arr[digit]<<" ";
	
}
int main(){
	int n;
	cin>>n;
	convertinwordforminc(n);


	return 0;
}