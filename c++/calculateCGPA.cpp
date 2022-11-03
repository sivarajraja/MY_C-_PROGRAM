#include<iostream>
using namespace std;

int main()
{
    char name[10];
    int reg;
    int eng,math,phy,bee,eg;
    float gpa,upr,lwr;

    cout<<"ENTER YOUR NAME:"<<endl;
    cin>>name;

    cout<<"enter your register no:"<<endl;
    cin>>reg;

    cout<<"enter your english mark:"<<endl;
    cin>>eng;

    cout<<"enter your maths mark:"<<endl;
    cin>>math;

    cout<<"enter your physics mark:"<<endl;
    cin>>phy;

    cout<<"enter your basic EEE mark:"<<endl;
    cin>>bee;

    cout<<"enter your engineering graphics mark:"<<endl;
    cin>>eg;

    upr= ((3*eng)+(4*math)+(5*phy)+(5*bee)+(3*eg));
    lwr=(3+4+5+5+3);
    gpa=upr/lwr;

    cout<<endl<<"NAME : "<<name<<endl<<"REGISTER NUMBER : RA21110030500"<<reg<<endl<<endl;
    cout<<"GPA :"<<gpa<<endl;

  return 0;  
}