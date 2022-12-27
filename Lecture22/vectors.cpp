#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// int arr[100];
	// cin>>arr[0]
	// /syntax
	// vector<datatype> vname;
	// vector<int> v;

	// v.push_back(30);
	// // cout<<v.size()<<endl;
	// // cout<<v.capacity()<<endl;
	// v.push_back(45);
	// // cout<<v.size()<<endl;
	// // cout<<v.capacity()<<endl;
	// v.push_back(23);
	// // cout<<v.size()<<endl;
	// // cout<<v.capacity()<<endl;
	// v.push_back(90);
	// // cout<<v.size()<<endl;
	// // cout<<v.capacity()<<endl;
	// v.push_back(89);
	// v.pop_back();
	// v.pop_back();
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// for(int i=0;i<=3;i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;



	vector<int> v;

	v.push_back(30);
	v.push_back(45);
	v.push_back(23);
	v.push_back(90);
	// v.push_front(67);
	v.insert(v.begin()+1,67);
	sort(v.begin(),v.end());
	for(int i=0;i<=4;i++){
		cout<<v[i]<<" ";
	}
	// if(v.empty()){
	// 	cout<<"vector is empty"<<endl;

	// }
	// else{
	// 	cout<<"vector is not empty"<<endl;
	// }

	// cout<<v.at(2)<<endl;

	// cout<<v.front()<<endl;





	
	return 0;
}