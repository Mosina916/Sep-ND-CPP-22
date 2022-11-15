#include<iostream>
using namespace std;
int main(){
	// int arr[]={1,2,3};
	// for(int i=0;i<=2;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// cout<<arr<<endl;//address
	// name of the array gives address of ist byte of first bucket

	// char arr1[]={'A','B','C','D','\0'};
	// // char arr1[5]={'A','B','C','D','\0'};
	// char arr1[5]="ABC";
	// for(int i=0;i<=3;i++){
	// 	cout<<arr1[i];
	// }
	// cout<<endl;
	// cout<<arr1<<endl;//ABCD till null

	// int arr[5];
	// for(int i=0;i<=4;i++){
	// 	cin>>arr[i];
	// }
	// // cin>>arr;


	// char arr1[5];
	// for(int i=0;i<=4;i++){
	// 	cin>>arr1[i];
	// }


	// cin>>arr1;


	// char arr[100];
	// // cin>>arr;//cin ignores white spaces -->'\t' '\n' ' '
	// // cin.getline(arr,100);//by delfault '\n'
	// cin.getline(arr,100,';');
	// cout<<arr<<endl;



	// char arr[10];//hel is$
	// char ch;
	// // cin>>ch;//h
	// ch=cin.get();//takes single char at a time

	// int count=0;
	// while(ch!='$'){
	// 	count++;
	// 	ch=cin.get();
	// 	// cin>>ch;


	// }

	// cout<<count<<endl;


	char ch;
	char arr[100]; //he is$
	ch=cin.get();//takes single char at a time
	int i=0;
	// while(ch!='\n'){
	while(ch!='\n'){
		// count++;

		arr[i]=ch;
		ch=cin.get();
		i++;
		// cin>>ch;
	}
	arr[i]='\0';
	cout<<arr<<endl;

	cin.getline(arr,100);
	cout<<arr<<endl;
	






	return 0;
}