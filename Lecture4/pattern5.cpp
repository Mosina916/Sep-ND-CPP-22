#include <iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5
	int rowno=1;
	while(rowno<=trows){
		// ===========================
	// rowno 3
	if(rowno%2==0){
		// even row
		int startval=0;
		int stc=1;
		while(stc<=rowno){
			// cout<<'*';
			cout<<startval;

			startval=1-startval;
			// if(startval==0){
			// 	startval=1;
			// }
			// else{
			// 	startval=0;
			// }

			stc=stc+1;
		}
		cout<<endl;
		rowno=rowno+1;
	}
	else{
		// odd row
		int dc=1;
		int startva=1;

		while(dc<=rowno){
			// cout<<'.';
			cout<<startva;
			startva=1-startva;
			// if(startva==1){
			// 	startva=0;
			// }
			// else{
			// 	startva=1;
			// }

			dc=dc+1;
		}
		cout<<endl;
		rowno=rowno+1;
	}
	// ===========================


	}



	
	return 0;
}