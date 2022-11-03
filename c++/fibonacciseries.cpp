#include<iostream>
using namespace std;

class Fibonacci_Series
{
    public:
     int n,a=0,b=1,c=0;

     void Get_Value()
     {
         cout<<"Enter a N limit's :"<<endl;
         cin>>n;
     }

     void Process()
     {
        for (int i=0;  i<=n; i++)
        {
            if(i==n)
            cout<<a<<endl;

            else
            cout<<a<<"+";

            c=a;
            a=b;
            b+=c;

        }
     }

};

int main()
{
    Fibonacci_Series f1;
    f1.Get_Value();
    f1.Process();

    return 0;
}