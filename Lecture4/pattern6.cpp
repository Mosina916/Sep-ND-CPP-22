#include <iostream>
using namespace std;
int main(){
	int trows;
	// cout<<"enetr "
	cin>>trows;//5
	int rowno=1;
	while(rowno<=trows){
		// spaces
	int spc=1;
	while(spc<=trows-rowno){
		cout<<" "<<'\t';
		spc=spc+1;
	}

	// inc 
	int startval=rowno;

	int inc=1;
	while(inc<=rowno){
		// cout<<'*';
		cout<<startval<<'\t';
		startval=startval+1;

		inc=inc+1;
	}

	// dec
	int dec=1;
	int sv=2*rowno-2;

	while(dec<=rowno-1){
		// cout<<'.';
		cout<<sv<<'\t';
		sv=sv-1;
		dec=dec+1;
	}

	cout<<endl;
	rowno=rowno+1;




	}

	// row

	


	


	
	return 0;
}