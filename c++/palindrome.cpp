#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[20],rs[20];

    cout<<"enter a name"<<endl;
    cin>>s;

    strcpy(rs,s);
    strrev(rs);

    if(strcmp(s,rs)==0)
      cout<<"it is palindrome";

    else
      cout<<"it is not a palindrome";


return 0;

}