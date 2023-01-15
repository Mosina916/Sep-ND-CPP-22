#include <iostream>
#include<vector>
using namespace std;
template<typename T>
class stack{
	// vector<int>v;
	// vector<char> v;
	vector<T> v;
	// push
public:

	// void push(int d){
	// void push(char d){
	void push(T d){
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
	// int top(){'
	// char top(){
	T top(){
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
	// stack s;
	stack<int>s;
	// stack<char>s;
	// cout<<s.v[2]<<endl;
	s.push(65);
	s.push(66);
	s.push(67);
	s.push(68);
	// s.push('a');
	// s.push('b');
	// s.push('c');
	// s.push('d');

	// s.push('a');
	// s.push('b');
	// s.push('c');
	// s.push('d');
	// cout<<s.v[2]<<end


	// print stac
	while(!s.empty()){
		cout<<s.top()<<" ";//23 
		s.pop();

	}
	
	// s.pop();
	// cout<<s.size()<<endl;
	// cout<<s.top()<<endl;





}