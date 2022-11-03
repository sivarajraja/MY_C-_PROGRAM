#include<iostream>
using namespace std;

class Find_Area
{
    public:
        void area(int l, int b)
        {
            cout<<"area of rectangle :"<<l*b<<endl;
        }
        void area(int l)
        {
            cout<<"area of square :"<<l*l<<endl;
        }

};

int main()
{
    int l,b,s;
    Find_Area a1;
    cout<<"enter a length and breath of a rectangle :"<<endl;
    cin>>l>>b;
    a1.area(l,b);

    cout<<"enter a length of a square :"<<endl;
    cin>>s;
    a1.area(s);

   return 0; 
}
