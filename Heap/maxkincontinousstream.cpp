#include<iostream>
#include <queue>
using namespace std;
void printheap(priority_queue<int> h){
	while(!h.empty()){
		cout<<h.top()<<" ";//0
		h.pop();

	}
	cout<<endl;

}
int main(){
	priority_queue<int> h;//max heap
	int k;
	cin>>k;//3
	int cou=1;

	while(1){
		int d;//3 19 2 0 -1
		cin>>d;
		if(cou<=k){
			h.push(d);
			cou++;
		}
		else{
			if(d==-1){
				printheap(h);
			}
			else{
				if(d<h.top()){
					h.pop();
					h.push(d);
				}
			}

		}

	}

	
	


	return 0;
}