#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	string length;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Name is:"<<name<<endl;
	cout<<name.length()<<endl;
	cout<<"Last letter is:"<<endl;
	cout<<name[name.length()-1]<<endl;
	cout<<"First letter is:";
	cout<<name[0]<<endl;
	cout<<"Traversal name is:"<<endl;
	for (int i=0; i<name.length(); i++){
		cout<<name[i]<<endl;
	}
	cout<<"Reverse name is:"<<endl;
	for (int i=name.length()-1; i>=0; i--){
		cout<<name[i]<<endl;
	}
	cout<<"Middle letter of the name is:"<<endl;
	cout<<name[name.length()/2]<<endl;
	return 0;
}