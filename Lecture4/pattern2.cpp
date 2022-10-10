#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5
	int rowno=1;
	while(rowno<=(trows-1)/2){
		// star
	int stc=1;
	while(stc<=rowno){
		cout<<'*';
		stc=stc+1;


	}

	// space
	int space=1;
	while(space<=trows-2*rowno){
		cout<<" ";
		space=space+1;
	}

	// star
	int st=1;
	while(st<=rowno){
		cout<<'*';
		st=st+1;
	}

	cout<<endl;
	rowno=rowno+1;


	}

	// MIDDLE rowno

	int starc=1;
	while(starc<=trows){
		cout<<'*';
		starc=starc+1;
	}

	cout<<endl;


	// lower half
	rowno=1;
	while(rowno<=(trows-1)/2){
		// star
	int stc=1;
	while(stc<=(trows+1)/2-rowno){
		cout<<"*";
		stc=stc+1;
	}


	// space 
	int s=1;
	while(s<=2*rowno-1){
		cout<<" ";
		s=s+1;
	}

	// star
	int stcc=1;
	while(stcc<=(trows+1)/2-rowno){
		cout<<"*";
		stcc=stcc+1;
	}

	cout<<endl;
	rowno=rowno+1;



	}




	
	

	


	return 0;
}