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
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Roll number is: "<<endl;
    cin>>rollno;
    cout<<"Marks is: "<<endl;
    cin>>marks;
    student s1(name, rollno, marks);
	s1.display();
}