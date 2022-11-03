#include<iostream>
using namespace std;

int addition(int a, int b);
float division(int c, int d);
string name();

int main()
{
    int i;
    float j;
    string k;

    i=addition(6,5);
    j=division(10,3);
    k=name();

    cout<<endl;

    cout<<"int function:"<<i<<endl;
    cout<<"float function:"<<j<<endl;
    cout<<"string function:"<<k<<endl<<endl;

    return 0;
}

int addition(int a, int b)
{
    int x= a+b;
    return x;
}

float division(int c, int d)
{
    float y=(float) c/d;
    return y;
}

string name()
{
    string z="hey! this message from string function.";
    return z;
}