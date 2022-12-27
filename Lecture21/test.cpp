#include <iostream>
using namespace std;
bool kyadaalsaktehaiyanahiiandjpe(int board[30][30],int i,int j,int n){
	// vertical check
	for(int k=i-1;k>=0;k--){
		if(board[k][j]==1){
			return false;
		}
	}

	// diagonal check
	// right 
	int u=i-1;//2
	int v=j+1;//3

	while(u>=0 and v<n){
		if(board[u][v]==1){
		return false;
	}
	u--;
	v++;

	}
	
	// left
	int x=i-1;
	int y=j-1;

	while(x>=0 and y>=0){
		if(board[x][y]==1){
		return false;
	}
	x--;
	y--;

	}


	return true;




}
bool nqueen(int board[30][30],int n,int i){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<board[k][l]<<" ";
			}
			cout<<endl;
		}

		// return true;

		return false;



	}

	// rec case
	for(int j=0;j<n;j++){
		if(kyadaalsaktehaiyanahiiandjpe(board,i,j,n)==true){
		board[i][j]=1;
		bool kyabakikaansmila=nqueen(board,n,i+1);
		if(kyabakikaansmila==true){
			return true;
		}
		board[i][j]=0;


	}

	}
	return false;
	
	
}
int main(){
	int n;
	int board[30][30]={0};
	cin>>n;
	nqueen(board,n,0);

}
