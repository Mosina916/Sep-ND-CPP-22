#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5
	int rowno=1;
	while(rowno<=(trows+1)/2){
		// spaces
	int spc=-1;
	while(spc<=rowno-3){
		cout<<" ";
		spc=spc+1;
	}
	// stars
	int stc=1;
	while(stc<=trows+2-(2*rowno)){
		cout<<"*";
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}


	// lower print
	rowno=1;
	while(rowno<=(trows-1)/2){
		// spaces
	int space=1;
	while(space<=(trows-1)/2-rowno){
		cout<<" ";
		space=space+1;

	}

	// stars
	int star=1;
	while(star<=(2*rowno)+1){
		cout<<"*";
		star=star+1;
	}
	cout<<endl;
	rowno=rowno+1;



	}



	




















	return 0;
}