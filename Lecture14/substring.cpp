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
void substrings(char arr1[100]){
	for (int i = 0; arr1[i]!='\0'; ++i)
	{
		for(int j=i;arr1[j]!='\0';j++){
			for(int k=i;k<=j;k++){
				cout<<arr1[k];
			}
			cout<<endl;
		}
	}
}

int main(){
	
	char arr1[100];
	cin.getline(arr1,100);//"abcyzz"
	substrings(arr1);

	





	return 0;
}