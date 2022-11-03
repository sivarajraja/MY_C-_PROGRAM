#include<iostream>
using namespace std;

class A     // it is a parent class
{
    public:
     int a,b;

    void Get_Value()
    {
        cout<<"enter the value of A and B  "<<endl;
        cin>>a>>b;
    }

};

class B:public A    // it is a child class of class A
{
    public:
     int c,d;

    void Addition()
    {
        c=a+b;
        cout<<"addition value is : "<<c<<endl;
    }

    void Subraction()
    {
        d=a-b;
        cout<<"subraction value is : "<<d<<endl;
    }

};

class C:public B    // it is a child class of class B
{
    public:
     int e,f;

    void Multiply()
    {
        e=a*b;
        cout<<"multiply value is : "<<e<<endl;
    }

    void Division()
    {
        f=a/b;
        cout<<"division value is : "<<f<<endl<<endl;
    }
};

int main()
{
    C c1,c2;        // create object for class C to access all the member in three class.
                    // because class C is the child class for all the class.

    c1.Get_Value();
    c1.Addition();
    c1.Subraction();
    c1.Multiply();
    c1.Division();

    c2.Get_Value();
    c2.Addition();
    c2.Subraction();
    c2.Multiply();
    c2.Division();


    return 0;
}