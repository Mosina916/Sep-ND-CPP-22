#include <iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;

	// upper

	int rowno=1;
	while(rowno<=(trows+1)/2){
		// ============================
	// space
	int spc=1;
	while(spc<=(trows+1)/2-rowno){
		cout<<" ";
		spc=spc+1;
	}

	// star
	int stc=1;
	while(stc<=2*rowno-1){
		cout<<"*";
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;


	// ============================

	}

	// lower half

	rowno=1;

	while(rowno<=(trows-1)/2){

		// spaces
	int spcc=1;
	while(spcc<=rowno){
		cout<<" ";
		spcc=spcc+1;
	}

	// stars
	int starc=1;
	while(starc<=trows-2*rowno){
		cout<<"*";
		starc=starc+1;
	}

	cout<<endl;
	rowno=rowno+1;

	}



	
	
	return 0;
}