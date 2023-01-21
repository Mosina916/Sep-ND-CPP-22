#include <iostream>
using namespace std;
int fibo(int pos){//5
	// base case
	// if(pos==1){
	// 	return 1;
	// }
	// if(pos==0){
	// 	return 0;
	// }
	if(pos==1){
		return 0;
	}
	if(pos==2){
		return 1;
	}
	// recursive case
	return fibo(pos-2)+fibo(pos-1);
}
int main(){
	int pos;
	cin>>pos;
	cout<<fibo(pos)<<endl;
	


	return 0;
}