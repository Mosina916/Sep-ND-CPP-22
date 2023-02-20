#include<iostream>
using namespace std;
class node{
public:
	string fname;
	int fprice;
	node*next;
	node(string fn,int fp){
		fname=fn;
		fprice=fp;
		next=NULL;
	}
};
class hashmap{
public:
	node**arr;
	int cs;
	int ts;
	hashmap(int s=7){
		cs=0;
		ts=s;
		arr=new node*[ts];
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

	}
	int hashfunction(string fn){
		int ans=0;
		int mult=1;
		for(int i=0;i<fn.length();i++){
			ans=(ans%ts+(fn[i]%ts*mult%ts)%ts)%ts;
			mult=mult*27;
		}
		return ans%ts;

		


	}
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;//14
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}
		// copy oldtable to new table

		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];

		while(head!=NULL){
			insert(head->fname,head->fprice);
		head=head->next;//NULL


		}

		}
	}
	// insert
	void insert(string fn,int fp){
		int index=hashfunction(fn);//4
		node*n=new node(fn,fp);
		node*head=arr[index];//NULL
		n->next=head;
		arr[index]=n;
		
		if(cs*1.0/ts>0.6){
			rehashing();
		}
		cs++;//2


	}

	// print
	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*head=arr[i];

			while(head!=NULL){
				cout<<'('<<head->fname<<", "<<head->fprice<<')';
				head=head->next;
			}

			cout<<endl;

		}
	}


	// search
	bool search(string key){
		for (int i = 0; i <ts; ++i)
		{
			node*head=arr[i];
			while(head!=NULL){
				if(head->fname==key){
					return true;

				}
				head=head->next;
			}
		}

		return false;
	}
};
int main(){
	hashmap h;
	h.insert("mango",1000);
	h.insert("banana",1032);
	h.insert("pineapple",1324);
	h.insert("guava",54332);
	h.insert("kiwi",454);
	// h.insert("qwe",4354);
	// h.insert("qwe",454);
	if(h.search("gava")==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}


	h.print();



	return 0;
}