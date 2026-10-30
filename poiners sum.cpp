#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int sum;
	int *p1;
	int *p2;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	p1=&a;
	p2=&b;
	sum = *p1+*p2;
	cout<<"sum is "<<sum<<endl;
}