#include<iostream>
using namespace std;
int main()
{
    //using & symbol for reference variable
    int value=11;
    int &ref=value;

    cout<<ref;
    return 0;
}