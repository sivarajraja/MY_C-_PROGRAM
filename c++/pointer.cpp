#include<iostream>
using namespace std;
int main()
{
    int n=10;
    //declare a pointer variable
    int *ptr= &n;

    cout<<ptr<<endl<<*ptr;

    return 0;
}