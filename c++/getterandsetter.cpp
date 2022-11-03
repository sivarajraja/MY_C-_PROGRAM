#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length,breath;

    public:
    void setlength(int a)
    {
        length=a;
    }

    int getlength()
    {
        return length;
    }

    void setbreath(int b)
    {
        breath=b;
    }

    int getbreath()
    {
        return breath;
    }

};


int main()
{
    rectangle r1;
    int l,b;

    cout<<"enter a length:"<<endl;
    cin>>l;

    cout<<"enter a breath:"<<endl;
    cin>>b;

    r1.setlength(l);
    r1.setbreath(b);

    cout<<"length is "<<r1.getlength()<<endl;
    cout<<"breath is "<<r1.getbreath()<<endl;

    cout<<"area of rectangle is "<<r1.getlength() * r1.getbreath();

    return 0;
}