// ****
// ***
// **
// *
// trows=4
#include <iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//3
	int rowno=1;
	while(rowno<=trows){
		// ==============================
		// spaces print
		int spc=1;
		while(spc<=trows-rowno){
			cout<<" ";
			spc=spc+1;
		}


		// stars print
		int stc=1;
		while(stc<=rowno){
			cout<<"*";
			stc=stc+1;
		}

		cout<<endl;
		rowno=rowno+1;
	
	// ==============================


	}


	
	return 0;
}