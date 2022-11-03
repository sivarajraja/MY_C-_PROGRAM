#include<iostream>
using namespace std;
int main()
{
    int num[5]={1,2,3,4,5};
    char alp[5]={'a','b','c','d','e'};
    float poi[5]={1.1,2.2,3.3,4.4,5.5};
    string let[5]={"hi","hey","hello","hai","aii"};

    cout<<"integer array =\n"<<endl;
    for(int i=0; i<5; i++)
        cout<<num[i]<<endl;

    cout<<"floating array =\n"<<endl;

    for(int j=0; j<5; j++)
        cout<<alp[j]<<endl;

    cout<<"character array =\n"<<endl;

    for(int k=0; k<5; k++)
        cout<<poi[k]<<endl;

    cout<<"string array =\n"<<endl;

    for(int l=0; l<5; l++)
        cout<<let[l]<<endl;

    return 0;
}