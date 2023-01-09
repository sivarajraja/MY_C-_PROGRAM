#include<bits/stdc++.h>
using namespace std;

void is_palindrome(int value)
{
    long long int num =0;
    int ans = value;

    if(value>0 && value<2147483647)
    {
        while(value>0)
        {
            num = num*10;
            num =num+(value%10);

            value = value/10;
        }
    }

    if(num == ans)
        cout<<"the number is palindrome";

    else
        cout<<"the number is not a palindrome";
}

int main()
{
    int value;
    cout<<"enter the value"<<endl;
    cin>>value;

    is_palindrome(value);

    return 0;
}