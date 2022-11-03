#include<iostream>
using namespace std;

class sample
{

    int length;

    public:
     sample(int x)
     {
         length =x;
     }

     friend void function(sample);
};

void function(sample s1)
{
    cout<<"length is "<<s1.length<<endl;
}

int main()
{
    sample s1(11);
    function(s1);

    return 0;
}