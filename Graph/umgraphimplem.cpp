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


	// bfs
	void bfs(U start){
		queue<U> q;
		q.push(start);
		unordered_map<U,bool> visited;
		visited[start]=true;

		while(!q.empty()){
			U x=q.front();//1
		q.pop();
		cout<<x<<" ";
		for(auto y: h[x]){//1
			if(!visited[y]){
				q.push(y);
				visited[y]=true;
			}

		}

		}
		




	}
	

	
	

};
int main(){
	// Graph g;
	// Graph<string>g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.addEdge("pope", "");

	// g.print(); 
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	// g.print();
	g.bfs(0);




	return 0;
}