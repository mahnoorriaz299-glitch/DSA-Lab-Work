#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		int marks;
		student(string n,int r,int m){
			name = n;
			rollno = r;
			marks = m;
		}
		student display(){
		cout<<"name is: "<< name<<endl;
		cout<<"roll num is: "<< rollno<<endl;
		cout<<"marks is= "<< marks<<endl;
	}
};
int main(){
    student s1("Mahnoor",103,97);
	s1.display();
}