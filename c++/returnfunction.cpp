#include<iostream>
using namespace std;

void sample();
int integer(int a,int b);
float floating(float d,float e);
char character();
string letter();

int main()
{
    sample();
    integer(5,6);
    floating(11.2,4.0);
    character();
    letter();

return 0;
}

void sample()
{
    cout<<"FUNCTION WIT RETURN TYPE."<<endl;
}

int integer(int a,int b)
{
    int c;
    c=a+b;
    cout<<"INTEGER VALUE:"<<c<<endl;
    return c;
}

float floating(float d,float e)
{
    float f;
    f=d/e;
    cout<<"FLOATING VALUE:"<<f<<endl;
    return f;
}

char character()
{
    cout<<"CHARACTER:S"<<endl;
    return 0;
}

string letter()
{
    cout<<"STRING:iam shiva!"<<endl;
    return 0;
}