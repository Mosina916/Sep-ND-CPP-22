#include<iostream>
#include<queue>
using namespace std;

int main(){
	// queue<datatype>name;
	queue<int>q;
	q.push(3);
	q.push(5);
	q.push(7);
	q.push(4);
	   
	while(!q.empty()){
		cout<<q.front()<<" ";//3 5 7  4
		q.pop();

	}
	

	return 0;
}