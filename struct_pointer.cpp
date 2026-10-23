#include<iostream>
using namespace std;
struct distance{
	int feet;
	float inch;
};
int main(){
	struct distance d;
	struct  distance*ptr = &d;
	cout<<"Enter feet:";
	cin>>ptr->feet;
	cout<<"Enter inch:";
	cin>>ptr->inch;
	cout<<"Displaying information:"<<endl;
	cout<<"Distance= "<<ptr->feet<<" feet and "<<ptr->inch<<" inches"<<endl;
}