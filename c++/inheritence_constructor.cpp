#include<iostream>
using namespace std;

class A
{
    public:
    A(int x)
    {
     cout<<"A class constructor with "<<x<<endl;
    }

};

class B: public A
{
    public:
    B(int a,int b):A(b)
    {
    cout<<"B class constructor with "<<a<<endl;
    }

};

int main()
{
    B b1(11,9);

    return 0;
}