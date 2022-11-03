#include<iostream>
using namespace std;

class sample
{
    public:
        sample()
        {
            cout<<"constructor opened first!"<<endl;
        }

        ~ sample()
        {
            cout<<"destructor opened last!"<<endl;
        }
};


int main()
{
    sample s1;
    for(int i=0; i<1; i++)
    {
        cout<<"for statement!"<<endl;
    }


    return 0;
}