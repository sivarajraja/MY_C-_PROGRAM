#include<iostream>
using namespace std;

class sample
{
    public:
    int num;
    sample(int a)       //normal constructor
    {
        num=a;
    }

    sample(sample &s)   //copy constructor
    {
        num=s.num;
    }

};

int main()
{
    sample s1(11);
    sample s2(s1);

    cout<<s1.num<<endl;
    cout<<s2.num<<endl;

    return 0;
}