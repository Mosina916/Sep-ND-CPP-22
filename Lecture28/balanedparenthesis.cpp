#include <iostream>
#include<stack>
using namespace std;
bool isbalanedornot(char arr[]){
	stack<char>s;
	// assume () {} []
	// // koi b open breacket  stack mai push
	// "[(()){()}]";
	// ((
	// "[({){()}]";
	for(int i=0;arr[i]!='\0';i++){
		char ch=arr[i];//)

	switch(ch){
		case '[':
		case '(':
		case '{':
		s.push(ch);
		break;
		case ')':if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case '}':if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case ']':if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		

	}

	}

	if(s.empty()){
		return true;

	}
	return false;

	


}
int main(){
	// char arr[]="[(()){()}]";
	// char arr[]="[(()){()}}";
	char arr[]="[((";
	if(isbalanedornot(arr)==true){
		cout<<"balanced"<<endl;
	}
	else{
		cout<<"Not balanced"<<endl;

	}




	return 0;
}
