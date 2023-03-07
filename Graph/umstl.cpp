#include<iostream>
#include<unordered_map>
// #include<map>
using namespace std;
int main(){
	// vector<int> v;
	// unordered_map<keydatatye,valuedatatype> nameofmap;
	// unordered_map<int,string> h;
	// map<int,string> h;
	unordered_map<string,string> h;

// insert in hashmap
	h["abc"]="hello";
	h["def"]="world";
	// h[2]="hii";
	// h[1]="hello";
	
	// h[6]="world";
	// h.insert(make_pair(3,"hello"));

	// for each loop
	for(auto x:h){
		cout<<x.first<<"-->"<<x.second<<endl;

	}




	return 0;
}