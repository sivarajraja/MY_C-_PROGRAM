#include<iostream>
using namespace std;

int main()
{
    int i,l,b,e;
    l=1189;
    b=841;

    for(i=0; i<9; ++i)
    {
        cout<<"A"<<i<<"="<<l<<"x"<<b<<endl<<endl;

        e=l;
        l=b;
        b=e/2;
    }

return 0;    
}