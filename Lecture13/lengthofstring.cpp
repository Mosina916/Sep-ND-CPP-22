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
int main(){
	char arr[100];
	cin.getline(arr,100);//'\n' ;;hell\0
	cout<<"len of string is "<<length(arr)<<endl;




	return 0;
}