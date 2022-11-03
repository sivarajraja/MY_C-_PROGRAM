#include<iostream>
using namespace std;

class  sample
{
    public:

    sample()
    {
        cout<<"\nit is a constructor !"<<endl;  // it display first
    }

    ~sample()
    {
        cout<<"it is a destructor !\n"<<endl;     //it display till end
    }

};

int main()
{
    sample s1;

    return 0;
}