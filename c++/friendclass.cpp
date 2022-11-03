#include<iostream>
using namespace std;

class sample1
{
    private:
       string name;
       int roll,m1,m2,m3;

    public:
       friend class sample2;

};

class sample2
{
    sample1 s1;

    public:
       void get()
       {
           cout<<"enter your name :"<<endl;
           cin>>s1.name;

           cout<<"enter roll number :"<<endl;
           cin>>s1.roll;

           cout<<"enter your marks :"<<endl;
           cin>>s1.m1>>s1.m2>>s1.m3;

       }

       void display()
       {
           cout<<"name : "<<s1.name<<endl;
           cout<<"roll no : "<<s1.roll<<endl;
           cout<<"mark : "<<endl<<s1.m1<<endl<<s1.m2<<endl<<s1.m3<<endl;
       }

};

int main()
{
    sample2 s2;

    s2.get();
    s2.display();

    return 0;
}