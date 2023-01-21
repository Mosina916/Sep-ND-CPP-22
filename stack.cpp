#include <iostream>
#include<vector>
using namespace std;
class stack{
	vector<int>v;
	// push
public:
	void push(int d){
		v.push_back(d);

	}

	// pop
	void pop(){
		v.pop_back();
	}

	// size
	int size(){
		return v.size();
	}

	// top
	int top(){
		return v[v.size()-1];
	}

	// empty
	bool empty(){
		if(v.size()==0){
			return true;
		}
		return false;
	}
};
int main(){
	stack s;
	s.push(4);
	s.push(3);
	s.push(13);
	s.push(23);

	// print stac
	while(!s.empty()){
		cout<<s.top()<<" ";//23 
		s.pop();

	}
	
	// s.pop();
	// cout<<s.size()<<endl;
	// cout<<s.top()<<endl;





}