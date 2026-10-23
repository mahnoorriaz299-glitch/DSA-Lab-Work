#include<iostream>
using namespace std;
struct distance{
	int feet;
	float inch;
	void print_distance(){
	cout<<"Displaying information:"<<endl;
	cout<<"Distance= "<<feet<<" feet and "<<inch<<" inches"<<endl;
}
};
int main(){
	struct distance d;
	struct  distance*ptr = &d;
	cout<<"Enter feet:";
	cin>>ptr->feet;
	cout<<"Enter inch:";
	cin>>ptr->inch;
	ptr->print_distance();
}