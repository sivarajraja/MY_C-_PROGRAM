#include<iostream>
using namespace std;

class A         //it is a parent class 
{
    public:
     int a,b,c;
    
    void get_Value()
    {
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    }

    void Addition()
    {
        c=a+b;
        cout<<"the value of addition is  "<<c<<endl;
    }

};

class B:public A    //it is a child class of inheritence
{
    public:
       int d;

    void Subraction()
    {
        d=a-b;
        cout<<"the value of subraction is  "<<d<<endl;
    }

};

int main()
{
    B sample;       // assign a object for child class to access both parent and child variables
    sample.get_Value();
    sample.Addition();
    sample.Subraction();

    return 0;
}