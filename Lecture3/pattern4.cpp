#include <iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//4
	// initilization
	// while(condition){
	// 	// task
	// 	// updation
	// }

	// rown=3
	int rowno=1;
	while(rowno<=trows){
		// ========================
	// spaces
	int csp=1;
	while(csp<=rowno-1){
		cout<<" ";
		csp=csp+1;//3

	}
	// stars
	int cst=1;
	while(cst<=trows-rowno+1){
		cout<<"* ";
	cst=cst+1;//2

	}

	cout<<endl;
	rowno=rowno+1;
	// ========================



	}






	
	return 0;
}