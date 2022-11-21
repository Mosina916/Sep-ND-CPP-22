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

bool permutationornot(char arr1[100],char arr2[100]){
	if(length(arr1)!=length(arr2)){
		return false;

	}
	else{
		int countarr1[26]={0};

		for(int i=0;arr1[i]!='\0';i++){
			char ch=arr1[i];//'b'
		int index=ch-'a';//'b'-'a'
		countarr1[index]++;

		}

		// for arr2

		for(int i=0;arr2[i]!='\0';i++){
			char ch=arr2[i];//'b'
		int index=ch-'a';//'b'-'a'
		countarr1[index]--;

		}

		// int countarr2[26]={0};

		// for(int i=0;arr2[i]!='\0';i++){
		// 	char ch=arr2[i];//'b'
		// int index=ch-'a';//'b'-'a'
		// countarr2[index]++;

		// }


		// for(int i=0;i<=25;i++){
		// 	if(countarr1[i]!=countarr2[i]){
		// 		return false;
		// 	}
		// }


			for(int i=0;i<=25;i++){
			if(countarr1[i]!=0){
				return false;
			}
		}

		return true;
		
		

	}

}

int main(){
	
	char arr1[100];
	cin.getline(arr1,100);//"abcyzz"
	char arr2[100];
	cin.getline(arr2,100);//"abcyyzz"

	if(permutationornot(arr1,arr2)==true){
		cout<<"yes permutation"<<endl;
	}
	else{
		cout<<"not permutation"<<endl;
	
	}

	





	return 0;
}