#include "ownheaderfile.h"
int main(){
	stack<int>s;
	s.push(65);
	s.push(66);
	s.push(67);
	s.push(68);
	// print stac
	while(!s.empty()){
		cout<<s.top()<<" ";//23 
		s.pop();

	}
	


}