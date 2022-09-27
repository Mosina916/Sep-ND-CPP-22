#include <iostream>
using namespace std;
int main(){

	int trows;
	cin>>trows;
	int rowno=1;
	while(rowno<=trows){
			// ============================
	// spaces
	int spc=1;
	while(spc<=trows-rowno){
		cout<<" ";
		spc=spc+1;
	}


	// stars
	int stc=1;
	while(stc<=2*rowno-1){
		cout<<"*";
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;

	// ============================

	}


	// rowno 2


	
	
	return 0;
}