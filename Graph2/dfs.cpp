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

	

	// void addEdge(U u,U v,bool birdir=false){
	void addedge(U u,U v,bool birdir=true){
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
	void dfs(U src,unordered_map<U,bool> &visited){


		cout<<src<<" ";//3 1 0 4 2
		visited[src]=true;
		for(auto x:h[src]){//1
			if(!visited[x]){
				dfs(x,visited);
			}


		}


	}



	
	

};
int main(){
	// depth first search
	
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);


	g.addedge(100,101);
	g.addedge(101,102);
	g.addedge(11,14);
	g.addedge(12,13);
	g.addedge(14,13);
	
	// g.print();
	unordered_map<int,bool> visited;
	g.dfs(3,visited);
	





	return 0;
}