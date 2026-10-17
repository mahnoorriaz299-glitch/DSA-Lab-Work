#include<iostream>
using namespace std;
class book{
	public:
		string title;
		string author;
		float price;
		book(string t,string a, float p){
			title = t;
			author = a;
			price = p;
		}
		void display(){
			cout<<"detail of book 1 is:"<<endl;
			cout<<"Book 1 Title is:"<<title<<endl;
			cout<<"Author name is: "<<author<<endl;
			cout<<"Book 1 price is = "<<price<<endl;
			cout<<"detail of book 2 is:"<<endl;
			cout<<"Book 2 Title is:"<<title<<endl;
			cout<<"Author name is: "<<author<<endl;
			cout<<"Book 1 price is = "<<price<<endl;
		}
};
int main(){
	book b1("DSA","NOOR",1000);
	book b2("ESRE","Hijab", 2500);
	b1.display();
	b2.display();
}