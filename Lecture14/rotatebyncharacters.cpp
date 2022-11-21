#include <iostream>
using namespace std;
int length(char arr[100]){
	int i=0;
	int len=0;

while(arr[i]!='\0'){
	len++;//4
	i++;//4
}
return len;
}
void rotatebyn(char arr[100],int n){
	int i=length(arr);//coding
	int k=i;//6
	int l=i;//6
	// piche se n charaters roatte karlo
	while(i>=0){
		arr[i+n]=arr[i];
		i--;

	}
	// cout<<arr<<endl;

	// n charcaters ko aage daal dega
	int s=0;
	while(s<n){
		arr[s]=arr[k];
	s++;
	k++;

	}
	// cout<<arr<<endl;
	// last pos pe null dall dega

	arr[l]='\0';

	cout<<arr<<endl;	

}
int main(){
	
	char arr[100];
	cin.getline(arr,100);//"coding"

	// 7 is  same as roatate by 1 
	// 6 is  same as roatate by 0

	int n;
	cin>>n;//6
	// if(n>=length(arr)){
		n=n%length(arr);
	// }
	rotatebyn(arr,n);







	return 0;
}