#include<iostream>
#include<list>
using namespace std;
int main(){
	// list<datatype> nameofll;
	list<int> l;
	l.push_back(5);
	l.push_back(7);
	l.push_back(2);
	l.push_back(0);
	l.push_front(8);//8 5 7 2 0

	l.pop_front();//5 7 2 0
	l.pop_back();//5 7 2

	list<int>::iterator it;
    for (it = l.begin(); it != l.end(); ++it)
        cout<< *it<<" ";
    cout << '\n';

    l.reverse();

    list<int>::iterator itt;
    for (itt = l.begin(); itt != l.end(); ++itt)
        cout<< *itt<<" ";
    cout << '\n';

    l.sort();
     list<int>::iterator ittt;
    for (ittt = l.begin(); ittt != l.end(); ++ittt)
        cout<< *ittt<<" ";
    cout << '\n';
	return 0;
}