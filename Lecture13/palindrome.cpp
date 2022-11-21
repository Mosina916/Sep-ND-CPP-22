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

bool palindromeornot(char arr[100]){
	int i=0;
	int j=length(arr)-1;
	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	return true;
	
}
int main(){
	char arr[100];
	cin.getline(arr,100);//'\n' ;;nitin
	if(palindromeornot(arr)==true){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;

	}




	return 0;
}