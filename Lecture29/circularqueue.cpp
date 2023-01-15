#include<iostream>
using namespace std;
class circularqueue{
	int *arr;
	int ts;
	int cs;
	int f;
	int r;
public:
	circularqueue(){
		arr=new int[5];
		ts=5;
		cs=0;
		f=0;
		r=-1;


	}
	// push
	void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}
	}

	// pop
	
	void pop(){
		if(cs>0){
			f=(f+1)%ts;
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}
	}

	// front
	int front(){
		return arr[f];
	}

	// size
	int size(){
		return cs;
	}
	// empty
	bool empty(){
		// if(cs==0){
		// 	return true;
		// }
		// return false;
		return cs==0;
	}




};

int main(){
	// queue<datatype>name;
	// queue<int>q;
	circularqueue q;
	q.push(3);
	q.push(5);
	q.push(7);
	q.push(4);
	q.push(8);
	// 3 5 7 4 8
	q.pop();
	// 5 7 4 8
	q.push(6);
	// 5 7 4 8 6
	q.push(7);
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();



	   
	while(!q.empty()){
		cout<<q.front()<<" ";//3 5 7  4
		q.pop();

	}
	

	return 0;
}