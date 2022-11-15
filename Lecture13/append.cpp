// "hello"
#include<iostream>
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



void append(char A[100],char B[100]){
	int i=0;
	int j=length(A);
	while(i<=length(B)){
		A[j]=B[i];
	i++;
	j++;

	}
	

}
int main(){
	// hell-->A
	// o hi-->B
	// o/p hello hi

	char A[100];
	char B[100];
	cin.getline(A,100);// hell-->A
	cin.getline(B,100);// o hi-->B

	cout<<A<<endl;
	cout<<B<<endl;

	append(A,B);//A k peeche b laga dou

	cout<<A<<endl;
	cout<<B<<endl;






	return 0;
}