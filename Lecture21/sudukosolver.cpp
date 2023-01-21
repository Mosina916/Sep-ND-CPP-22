#include<iostream>
#include<cmath>
using namespace std;
bool kyanumdaalsaktehaiyanahi(int num,int mat[9][9],int i,int j){
	// vertical
	for(int k=0;k<9;k++){
		if(mat[k][j]==num){
			return false;
		}
	}


	// horzontal
	for(int k=0;k<9;k++){
		if(mat[i][k]==num){
			return false;
		}
	}

	// i-->5 
	// j-->7
	int g=sqrt(9);

	int si=(i/g)*g;//3
	int sj=(j/g)*g;//6

	for(int p=si;p<=si+2;p++){
		for(int q=sj;q<=sj+2;q++){
			if(mat[p][q]==num){
				return false;
			}
		}

	}

	// root(n)*root(n)
	return true;

}
bool sudukosolver(int mat[9][9],int i,int j){
	// base case 
	if(i==9){
		for(int k=0;k<9;k++){
			for(int l=0;l<9;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;

		}

		return true;

	}


	// rec case
	if(j==9){
		return sudukosolver(mat,i+1,0);
	}
	// filled
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1);
	}
	// 
	else{
		// unfilled
		for(int num=1;num<=9;num++){
			if(kyanumdaalsaktehaiyanahi(num,mat,i,j)==true){
			mat[i][j]=num;
			bool kyaaageseansmilayanahi=sudukosolver(mat,i,j+1);
			if(kyaaageseansmilayanahi==true){
				return true;

			}
			mat[i][j]=0;

		}

		}
		return false;

	}
	
}
int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};


		sudukosolver(mat,0,0);


	return 0;
}