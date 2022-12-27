#include <iostream>
using namespace std;
void permutation(char *inpu,int i){
	// base case
	if(inpu[i]=='\0'){
		cout<<inpu<<endl;//abc
		return;
	}
	// rec case
	for(int j=i;inpu[j]!='\0';j++){
		swap(inpu[i],inpu[j]);
	permutation(inpu,i+1);
	swap(inpu[i],inpu[j]);//backtracking


	}
	
}

int main(){

	char inpu[1000];
	cin>>inpu;

	permutation(inpu,0);
	


	return 0;
}
