#include<iostream>
using namespace std;

class room
{
    private:
    int length;
    int breath;
    public:
    int getLengthBreath(int l,int b)
    {
        length = l;
        breath = b;
        return l*b;
    }
    int  view()
    {
        cout<<endl<<length<<endl<<breath;
        return 0;
    }
 
};  
    int main()
    {
        room r1;
        cout<<r1.getLengthBreath(8,10);
        r1.view();

        return 0;
    }
