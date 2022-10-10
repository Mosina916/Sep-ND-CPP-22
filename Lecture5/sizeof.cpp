#include<iostream>
using namespace std;
int main(){
	cout<<sizeof(int)<<endl;//4
	cout<<sizeof(char)<<endl;//1
	cout<<sizeof(float)<<endl;//4
	cout<<sizeof(double)<<endl;//8
	cout<<sizeof(bool)<<endl;//1


	int a=9;
	float b=7.99;
	cout<<sizeof(a)<<endl;//4
	cout<<sizeof(b)<<endl;//1


	cout<<sizeof('A')<<endl;//4
	cout<<sizeof(30)<<endl;//1
	cout<<sizeof(true)<<endl;//4
	cout<<sizeof(7.99)<<endl;//8
	cout<<sizeof(34.45636)<<endl;//1

	








	return 0;
}