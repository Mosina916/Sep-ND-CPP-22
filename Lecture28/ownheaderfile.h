#include <iostream>
#include<vector>
using namespace std;
template<typename T>
class stack{
	vector<T> v;
	// push
public:
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