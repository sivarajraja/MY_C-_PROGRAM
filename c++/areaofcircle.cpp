#include<iostream>
using namespace std;

class circle
{
    private:
        int r;
        float a;
        float c,pi=3.14;

    public:
        
        void get()
        {
            cout<<"\n enter the radius of the circle:";
            cin>>r;
        }

        void find()
        {
            a=pi*r*r;
            c=2*pi*r;
        }

        void print()
        {
            cout<<"\n area of circle : "<<a<<endl;
            cout<<" circumference of circle : "<<c<<endl;
        }

};

int main()
{
    circle c1;

    c1.get();
    c1.find();
    c1.print();

    return 0;
}
