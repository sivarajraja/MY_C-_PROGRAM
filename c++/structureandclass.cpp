#include<iostream>
using namespace std;

struct student
{
    public:
    int no;
    string name;
    float fees;

    void StudentDetails()
    {
        cout<<no<<" . "<<name<<" monthly fees is "<<fees<<endl;
    }
};

class teacher
{
    public:
    int no;
    string name;
    float salary;

    void TeacherDetails()
    {
        cout<<no<<" . "<<name<<" salary is "<<salary<<endl;
    }
    

};

int main()
{
    student s1;
    teacher t1;

    s1.no=1;
    s1.name="shiva";
    s1.fees=2500;

    t1.no=1;
    t1.name="parkavi";
    t1.salary=30000;

    s1.StudentDetails();

    t1.TeacherDetails();

    return 0;

}