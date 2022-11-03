#include<iostream>
using namespace std;

int add(int a, int b, int c)
{
    int sum=a+b+c;
    int sub=a-b-c;
    int mul=a*b*c;
    cout << "aditiion: "<< sum << endl;
    cout << "subraction: "<< sub << endl;
    cout << "multiply: "<< mul << endl;

    return sum;
}
int main()
{
    add(5,4,2);

return 0;    
}