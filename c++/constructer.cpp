#include<iostream>
using namespace std;

class construct
{
    private:
    int number;

    public:

    construct()
    {
        cout<<"constructer is run first when the object is created!"<<endl;
    }

    void getnumber(int n)
    {
        number=n;
    }

    int getnum()
    {
        return number;
    }
};


int main()
{
    construct c1;
    c1.getnumber(11);
    cout<<c1.getnum();

    return 0;
}