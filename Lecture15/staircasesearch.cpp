#include<iostream>
using namespace std;

bool staircasesearch(int arr[4][3],int key,int trows,int tcols){
	int i=0;
	int j=tcols-1;

	while(i<=trows-1 and j>=0){
		if(key==arr[i][j]){
		cout<<key<<" is present at index "<<i<<" , "<<j<<endl;
			return true;

	}
	else if(key>arr[i][j]){
		i++;
	}
	else{
		j--;
	}

	}

	return false;

	
	
	
}
int main(){

	int arr[4][3]={
		{1,3,7},
		{2,4,9},
		{6,8,10},
		{16,17,20}
	};

	int rows=4;
	int cols=3;
	int key;
	cin>>key;//9
	if(staircasesearch(arr,key,rows,cols)==false){
		cout<<"key is not present"<<endl;
	}






	return 0;
}