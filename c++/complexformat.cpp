#include<iostream>
using namespace std;

class Complex
{
    private:
     int x,y;

    public:

    void Assign_Value(int a,int b)
    {
        x=a;
        y=b;
    }

    void Print_Value()
    {
        cout<<"COMPLEX FORMAT:"<<endl;
        cout<<x<<"+i"<<y<<endl;
    }

};

int main()
{
    Complex c1;

    int a,b;
    cout<<"enter a two numbers :"<<endl;
    cin>>a>>b;

    c1.Assign_Value(a,b);
    c1.Print_Value();

    return 0;
}