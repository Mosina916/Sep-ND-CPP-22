#include<iostream>
#include <vector>
using namespace std;
class Minheap{
	vector<int> v;
public:
	Minheap(){
		v.push_back(-1);
	}


	// insert
	void insert(int d){
		v.push_back(d);
		int child=v.size()-1;
		while(child>1){
			int parent=child/2;
			if(v[parent]>v[child]){
				swap(v[parent],v[child]);
				
			}
			child=parent;
			// else{
			// 	break;
			// }
		}

	}

	// heapify
	void heapify(int index){//5

		int minindex=index;//5
		int lc=2*index;//10
		int rc=2*index+1;//11
		// lc k saath
		if(lc<v.size() and v[lc]<v[minindex]){
			minindex=lc;

		}
		// rc k saath 
		if(rc<v.size() and v[rc]<v[minindex]){
			minindex=rc;

		}

		if(minindex!=index){
				swap(v[minindex],v[index]);
		heapify(minindex);

		}
	}


	// delete

	void deleteinheap(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}

	int top(){
		return v[1];
	}


	// size
	int size(){
		return v.size()-1;
	}

	bool empty(){

		return v.size()==1;
		// if(v.size()==1){
		// 	return true;
		// }
		// return false;
	}


};
int main(){
	// heap sort
	Minheap h;

	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(0);


// loop
	while(!h.empty()){
		cout<<h.top()<<" ";//0
		h.deleteinheap();

	}
	cout<<endl;
	






}