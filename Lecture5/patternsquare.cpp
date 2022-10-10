#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
	int trows;
	cin>>trows;

	int rowno=1;
	while(rowno<=trows){
		// same no

	int s=1;
	while(s<=rowno){
		cout<<rowno<<" ";
		s=s+1;
	}
	// inc seq

	int stno=rowno+1;
	int i=1;
	while(i<=trows-rowno){
		cout<<stno<<" ";
		stno=stno+1;

		i=i+1;
	}

	cout<<endl;
	rowno=rowno+1;



	}



	


	return 0;
}