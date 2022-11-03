#include<iostream>
using namespace std;

class Student;
class student
{
    private:
      int roll;
      string name;
    
    public:
     friend void add_details(student,Student);
};

class Student
{
    private:
      int mark;
    
    public:
      friend void add_details(student,Student);

};

void add_details(student s1, Student s2)
{
    s1.roll = 36;
    s1.name = "shiva";
    s2.mark = 111;

    cout<<s1.roll<<endl;
    cout<<s1.name<<endl;
    cout<<s2.mark<<endl;
}

int main()
{
    student s;
    Student S;
    add_details(s,S);

    return 0;
}