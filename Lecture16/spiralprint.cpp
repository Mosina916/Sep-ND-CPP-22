#include<iostream>
using namespace std;
// void spiralprint(int arr[5][3],int trows,int tcols){
	// void spiralprint(int arr[3][5],int trows,int tcols){
	
void formmatrixxando(char arr[100][100],int trows,int tcols){
	int sr=0;
	int sc=0;
	int ec=tcols-1;
	int er=trows-1;
	char ch='X';

	while(sr<=er and sc<=ec){
		// pehla row
	for(int i=sc;i<=ec;i++){
		// cout<<arr[sr][i]<<" ";
		arr[sr][i]=ch;
	}
	sr++;
	// last col
	for(int j=sr;j<=er;j++){
		// cout<<arr[j][ec]<<" ";
		arr[j][ec]=ch;
	}
	ec--;
	// last row
	if(sr<=er){
			for(int i=ec;i>=sc;i--){
		// cout<<arr[er][i]<<" ";
				arr[er][i]=ch;
	}
	er--;

	}

	// ist col
	if(sc<=ec){
		for(int j=er;j>=sr;j--){
		// cout<<arr[j][sc]<<" ";
			arr[j][sc]=ch;
	}
	sc++;

	}
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
	


	}
	
	

}
int main(){

	int rows,cols;
	cin>>rows>>cols;//7 7
	// int arr[1000][1000];
	char arr[100][100];
	

	formmatrixxando(arr,rows,cols);

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}




	return 0;
}