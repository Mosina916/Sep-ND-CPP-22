#include<iostream>
#include <unordered_map>
#include<list>
#include<queue>
// #include <map>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> > h;
	// map<string,list<string> > h;
	unordered_map<U,list<U> > h;
	
public:

	// addedge()

	void addedge( U u,U v,bool birdir=false){
	// void addedge(U u,U v,bool birdir=true){
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);

		}

	}

	// print 
	void print(){
		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto y:x.second){
				cout<<y<<", ";

			}
			cout<<endl;


		}

	}


	// bfs
	// void bfs(U start){
	// 	queue<U> q;
	// 	q.push(start);
	// 	unordered_map<U,int> distance;

	// 	distance[start]=0;
	// 	unordered_map<U,bool> visited;
	// 	visited[start]=true;
	// 	while(!q.empty()){
	// 		U x=q.front();//1
	// 	q.pop();
	// 	// cout<<x<<" ";
	// 	for(auto y: h[x]){//1
	// 		if(!visited[y]){
	// 			q.push(y);
	// 			visited[y]=true;
	// 			distance[y]=distance[x]+1;
	// 		}

	// 	}

	// 	}

	// 	for(auto s:distance){
	// 		cout<<"distance of "<<s.first<<" from "<<start<<" is "<<s.second<<endl;

	// 	}

	// }


	int sssp(U start,U dest){
		queue<U> q;
		q.push(start);
		unordered_map<U,int> distance;
		
		unordered_map<U,U>parent;
		parent[start]=start;
		distance[start]=0;
		unordered_map<U,bool> visited;
		visited[start]=true;
		while(!q.empty()){
			U x=q.front();//1
		q.pop();
		// cout<<x<<" ";
		for(auto y: h[x]){//1
			if(!visited[y]){
				q.push(y);
				visited[y]=true;
				distance[y]=distance[x]+1;
				parent[y]=x;
			}

		}

		}

		// print path
		U temp=dest;
		while(temp!=parent[temp]){
			cout<<temp<<"-->";
			temp=parent[temp];
		}

		cout<<temp<<endl;

		return distance[dest];

		

	}
	

	
	

};
int main(){

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	

	Graph<int>g;
	for(int sp=0;sp<=35;sp++){
		for(int dice=1;dice<=6;dice++){
		int fp=sp+dice+board[sp+dice];
		g.addedge(sp,fp);



	}
	

	}
	
	
	cout<<g.sssp(0,36)<<endl;

	// g.bfs(3);




	return 0;
}