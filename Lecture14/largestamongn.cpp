#include <iostream>
using namespace std;
int length(char arr[100]){
	int i=0;
	int len=0;

while(arr[i]!='\0'){
	len++;//4
	i++;//4
}
return len;
}

void copyBtoA(char A[100],char B[100]){
	int i=0;
	while(i<=length(B)){
		A[i]=B[i];
		i++;


	}


}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//"board"

	char ms[100];
	copyBtoA(ms,arr);//"board"
	int maxl=length(ms);


// loop
	for(int i=1;i<=n-1;i++){
		cin.getline(arr,100);//hi
	if(length(arr)>maxl){//2>6
		copyBtoA(ms,arr);
		maxl=length(arr);

	}

	}

	cout<<ms<<endl;
	cout<<maxl<<endl;
	





	return 0;
}