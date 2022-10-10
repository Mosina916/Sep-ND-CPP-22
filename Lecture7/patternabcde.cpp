#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;
	int rowno=1;
	while(rowno<=trows){
		// =============================
		// inc stars
	int str1=1;
	char ch='A';
	while(str1<=trows+1-rowno){
		// cout<<'*';
		cout<<ch;
		str1=str1+1;
		ch=ch+1;//F
	}


		// dec #

	int str2=1;
	ch=ch-1;//F-1-->E
	while(str2<=trows+1-rowno){
		// cout<<'#';
		cout<<ch;
		ch=ch-1;
		str2=str2+1;
	}

	cout<<endl;
	rowno=rowno+1;




	// =============================

	}

	

	

	
	return 0;
}