#include<iostream>
#define crazy(a,b,c,d,e) c##a##d##e
#define fun crazy(a,d,m,i,n)
using namespace std;

void fun()
{
    cout<<"this function run without main function!"<<endl;

}