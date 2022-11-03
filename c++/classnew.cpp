#include<iostream>
using namespace std;

class addition
{
    public:
        int a,b;

    int add()
    {
        return a+b;
    }
};

int main()
{
    addition fun1;
    fun1.a=6;
    fun1.b=5;
    cout<<"class addition:"<<fun1.add()<<endl;

    addition fun2;
    fun2.a=10;
    fun2.b=11;
    cout<<"class addition:"<<fun2.add()<<endl;

    addition fun3;
    fun3.a=21;
    fun3.b=10;
    cout<<"class addition:"<<fun3.add()<<endl;

    return 0;
}