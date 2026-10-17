#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		int marks;
		student display(){
		cout<<"Details of Student 1 is:"<<endl;
		cout<<"name is: "<< name<<endl;
		cout<<"roll num is: "<< rollno<<endl;
		cout<<"marks is = "<< marks<<endl;
		cout<<"Details of Student 2 is:"<<endl;
		cout<<"name is: "<< name<<endl;
		cout<<"roll num is: "<< rollno<<endl;
		cout<<"marks is = "<< marks<<endl;
		cout<<"Details of Student 3 is:"<<endl;
		cout<<"name is: "<< name<<endl;
		cout<<"roll num is: "<< rollno<<endl;
		cout<<"marks is = "<< marks<<endl;
	}
};
int main(){
    student s1;
    student s2;
    student s3;
    s1.name=" Mahnoor";
    s1.rollno = 103;
    s1.marks = 97;
    s2.name=" Filza";
    s2.rollno = 046;
    s2.marks = 80;
    s3.name=" Hijab";
    s3.rollno = 126;
    s3.marks = 50;
	s1.display();
	s2.display();
	s3.display();
}