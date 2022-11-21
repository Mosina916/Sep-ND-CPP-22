#include<iostream>
using namespace std;
int co=0;
bool kyamaidaalsaktihunyanah(int sol[100][100],int i,int j,int n){
	// vertical check
	for(int l=0;l<i;l++){
		if(sol[l][j]==1){
			return false;
		}
	}

	// right diagonal 
	int u=i-1;//1
	int v=j+1;//3

	while(u>=0 and v<n){
		if(sol[u][v]==1){
		return false;
	}
	u--;
	v++;

	}

	// left diagonal 
	int l=i-1;//1
	int m=j-1;//1

	while(l>=0 and m>=0){
		if(sol[l][m]==1){
		return false;
	}
	l--;
	m--;

	}



	return true;

}

bool nqueen(int sol[100][100],int i,int n){
	// base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		// return true;
		cout<<endl;
		co++;
		return false;
	}


	// rec case
	for(int j=0;j<n;j++){
		if(kyamaidaalsaktihunyanah(sol,i,j,n)==true){
		sol[i][j]=1;
		bool kyabakiansmila=nqueen(sol,i+1,n);
		if(kyabakiansmila==true){
			return true;

		}
		sol[i][j]=0;

	}


	}

	// cout<<endl;
	return false;

}


int main(){
	

	return 0;
	
}