#include<iostream>
using namespace std;

int main()
{
    int a[3]={1,2,3};
    float b[3]={11.1,12.2,13.3};
    char c[3]={'a','b','c'};
    string d[3]={"HEY!","IAM","SHIVA"};

    cout<<"INTEGER ARRAY"<<endl;
    for(int i=0; i<3; ++i)
        cout<<a[i]<<endl;

    cout<<"FLOAT ARRAY"<<endl;
    for(int j=0; j<3; ++j)
        cout<<b[j]<<endl;

    cout<<"CHAR ARRAY"<<endl;
    for(int k=0; k<3; ++k)
        cout<<c[k]<<endl;

    cout<<"STRING ARRAY"<<endl;
    for(int l=0; l<3; ++l)
        cout<<d[l]<<endl;

 return 0;                   
}