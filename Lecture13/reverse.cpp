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

void reverse(char arr[100]){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;

	}

	


}
int main(){
	char arr[100];
	cin.getline(arr,100);//'\n' ;;nitin
		cout<<arr<<endl;
	reverse(arr);

	cout<<arr<<endl;




	return 0;
}