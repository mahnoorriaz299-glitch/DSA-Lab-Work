#include<iostream>
using namespace std;
int main(){
	int var1 = 10;
	int var2 = 19;
	int *p;
	cout<<&var1<<endl;
	cout<<&var2<<endl;
	p = &var1;
	cout<<p<<endl;
	p = &var2;
	cout<<p<<endl;
}