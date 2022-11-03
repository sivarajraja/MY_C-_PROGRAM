#include<iostream>
using namespace std;

class sample
{
    private:
    int length;

    public:
    sample(int x)
    {
        length=x;
    }

    friend void frifun(sample);

};

void frifun(sample s1)
{
    cout<<"length is "<<s1.length<<endl;
}

int main()
{
    sample s1(11);
    frifun(s1);

    return 0;
}