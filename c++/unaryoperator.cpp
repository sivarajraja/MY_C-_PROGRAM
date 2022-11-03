#include<iostream>
using namespace std;

class unary_Operator
{
    public:
     int a,b;

     unary_Operator(int x,int y)
     {
         a=x;
         b=y;
     }

    void operator --()
    {
       a= --a;
       b= --b;
    }

    void Bprint()
    {
        cout<<"BEFORE DECREMENT \n"<<a<<endl<<b<<endl;
    }

    void Print()
    {
        cout<<"AFTER DECREMENT \n"<<a<<endl<<b<<endl;
    }

};

int main()
{
    unary_Operator u1(6,5);
    u1.Bprint();
    --u1;
    u1.Print();

    return 0;
}