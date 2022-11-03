#include<iostream>
using namespace std;

class sample
{
    public:
     int a,b,c;
     void Get_Input(int x,int y,int z)
     {
         a=x;
         b=y;
         c=z;
     }

     void operator ++()
     {
         a=++a;
         b=++b;
         c=++c;
     }

     void Display_Value()
     {
         cout<<"A is "<<a<<"\nB is "<<b<<"\nC is "<<c<<endl;
     }

};

int main()
{
    sample s1;
    s1.Get_Input(7,9,11);
    s1.Display_Value();
    ++s1;
    s1.Display_Value();

    return 0;
}