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
	string name;
	int rollno;
	int marks;
	cout<<"Details of student 1 is : "<<endl;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Roll number is: "<<endl;
    cin>>rollno;
    cout<<"Marks is: "<<endl;
    cin>>marks;
        student s1(name, rollno, marks);
    cout<<"Details of student 2 is : "<<endl;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Roll number is: "<<endl;
    cin>>rollno;
    cout<<"Marks is: "<<endl;
    cin>>marks;
        student s2(name, rollno, marks);
    cout<<"Details of student 3 is : "<<endl;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Roll number is: "<<endl;
    cin>>rollno;
    cout<<"Marks is: "<<endl;
    cin>>marks;
    student s3(name, rollno, marks);
	s1.display();
	s2.display();
	s3.display();
}