#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int age;
	int rollnum;
	int marks;
		student display(){
		cout<<"name is:"<< name<<endl;
		cout<<"age is="<< age<<endl;
		cout<<"roll num is:"<< rollnum<<endl;
		cout<<"marks is="<< marks<<endl;
	}
};
int main(){
	student s;
	s.name = "Mahnoor";
	s.age = 18;
	s.rollnum = 103;
	s.marks = 94;
		s.display();
}