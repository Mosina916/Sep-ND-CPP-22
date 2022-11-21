#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//496
	int revereno=0;

	while(no!=0){
		int lastdigit=no%10;//496%10-->6 49%10-->9

	revereno=revereno*10+lastdigit;//6 69

	no=no/10;//496/10-->49/10-->4/10-->0

	}
	


	cout<<revereno<<endl;
	

	
	return 0;
}