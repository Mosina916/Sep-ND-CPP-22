#include<iostream>
using namespace std;
int sol[10][10]={0};
int cnt=0;
bool ratinamaze(char maze[10][10],int trows,int tcols,int i,int j){
	// base case
	if(i==trows-1 and j==tcols-1){
		sol[i][j]=1;
		for(int l=0;l<trows;l++){
			for(int k=0;k<tcols;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}

		cout<<endl;
		cnt++;

		// return true;
		sol[i][j]=0;
		return false;
	}
	// rec case
	sol[i][j]=1;
	// forward
	if(j<=tcols-2 and maze[i][j+1]!='X'){
		bool kyaaageseansmila=ratinamaze(maze,trows,tcols,i,j+1);
		if(kyaaageseansmila==true){
			return true;

		}
	}
	// downward
	if(i<=trows-2 and maze[i+1][j]!='X'){
		bool kyaneecheseansmila=ratinamaze(maze,trows,tcols,i+1,j);
		if(kyaneecheseansmila==true){
			return true;
		}
	}
	sol[i][j]=0;//backtrack;

	return false;

}
int main(){
	// char maze[10][10]={
	// 	"OOXO",
	// 	"XOOX",
	// 	"XXOO",
	// 	"OOOO"
	// };



	char maze[10][10]={
		"OOXO",
		"OOOX",
		"OXOO",
		"OOOO"
	};
	// int arr[10]={0};
	// int sol[10][10]={0};
	int rows=4;
	int cols=4;
	
	ratinamaze(maze,rows,cols,0,0,sol);
	cout<<cnt<<endl;

	return 0;
	
}