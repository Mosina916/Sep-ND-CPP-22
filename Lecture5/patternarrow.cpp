#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
	int trows;
	cin>>trows;
	if(trows>=3){
		int rowno=1;
	int sp=1;
	while(sp<=trows-1){
		cout<<"  ";
		sp=sp+1;
	}
	cout<<1<<endl;

	rowno=2;
	while(rowno<=(trows+1)/2){
		// ==============================
	// spaces
	int spc=1;
	while(spc<=trows-(2*rowno)+1){
		cout<<"  ";
		spc=spc+1;

	}


	// no
	int stno=rowno;
	int nc=1;
	while(nc<=rowno){
		// cout<<"* ";

		cout<<stno<<" ";
		stno=stno-1;
		nc=nc+1;
	}

	// spaces

	int s=1;
	while(s<=2*rowno-3){
		cout<<"  ";
		s=s+1;

	}

	// no
	int ncc=1;
	int sttn=1;

	while(ncc<=rowno){
		// cout<<"* ";
		cout<<sttn<<" ";
		ncc=ncc+1;
		sttn=sttn+1;
	}

	cout<<endl;
	rowno=rowno+1;

	// ==============================

	}


	rowno=1;

	while(rowno<=(trows-3)/2){

	// ==============================

	// spcaes
	int sp=1;
	while(sp<=2*rowno){
		cout<<"  ";
		sp=sp+1;
	}

	// no

	int noo=1;
	int stno=(trows+1)/2-rowno;
	while(noo<=(trows+1)/2-rowno){
		// cout<<"* ";

		cout<<stno<<" ";
		noo=noo+1;
		stno=stno-1;
	}

	// spaces
	int spcc=1;

	while(spcc<=trows-2*rowno-2){
		cout<<"  ";
		spcc=spcc+1;
	}

	// no
	int nooo=1;
	int x=1;
	while(nooo<=(trows+1)/2-rowno){
		// cout<<"* ";
		cout<<x<<" ";
		nooo=nooo+1;
		x=x+1;
	}

	cout<<endl;
	rowno=rowno+1;

	// ==============================
	}


// last 
	int sppp=1;
	while(sppp<=trows-1){
		cout<<"  ";
		sppp=sppp+1;
	}
	cout<<1<<endl;



	}

	







	

	return 0;
}