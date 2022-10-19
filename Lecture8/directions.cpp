#include<iostream>
using namespace std;
int main(){
	int x=0,y=0;
	// SSSNEEEW

	char ch;
	// cin>>ch;//S

	ch=cin.get();

	while(ch!='\n'){
		if(ch=='E'){
		x++;

	}
	else if(ch=='W'){
		x--;
	}
	else if(ch=='N'){
		y++;
	}
	else {
		y--;

	}
	// cin>>ch;//\n
	ch=cin.get();

	}


	// cout<<x<<" "<<y<<endl;  //0 5

	if(x>=0 and y>=0){ //3 2
		// ist quad
		for(int i=1;i<=x;i++){
			cout<<'E';
		}

		for(int j=1;j<=y;j++){
			cout<<'N';
		}

		cout<<endl;

	}
	else if(x<=0 and y>=0){
		// 2nd quad
		for(int i=1;i<=y;i++){
			cout<<'N';
		}
		// for(int i=x;i<0;i++){
		// 	cout<<'W';
		// }

		// for(int i=x+1;i<=0;i++){
		// 	cout<<'W';
		// }

		for(int i=1;i<=abs(x);i++){
			cout<<'W';
		}
		cout<<endl;
	}
	else if(x<0 and y<0){//-3 -4 
		// 3rd quad
		for (int i = 1; i <=abs(y); ++i)
		{
			cout<<'S';
		}

		for (int i = 1; i <=abs(x); ++i)
		{
			cout<<'W';
		}
		cout<<endl;



	}
	else{//3 -5
		// 4th quad
		for (int i = 1; i <=x; ++i)
		{
			cout<<'E';
		}
		for (int i = 1; i <=abs(y); ++i)
		{
			cout<<'S';
		}

		cout<<endl;



	}
	
	


	return 0;
}