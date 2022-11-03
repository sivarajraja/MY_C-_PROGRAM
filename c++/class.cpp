#include<iostream>
using namespace std;

class calculate
{
    public:
    
    int add(int a,int b)
    {
        cout <<"value:" <<a+b <<endl;
        return a+b;
    }
};

int main()
{
    calculate calc1;
    calc1.add(6,5);

    calculate calc2;
    calc2.add(11,22);

 return 0;   
}
