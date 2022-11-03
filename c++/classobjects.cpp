#include<iostream>
using namespace std;

class room
{
    public:
    int length;
    int breath;
    int findVolume()
    {
        int volume=length*breath;
        return volume;
    }

    int main()
    {
        room r1;
        cout<<"enter a length:";
        cin>>r1.length;
        cout<<"enter a breath:";
        cin>>r1.breath;
        cout<<r1.findVolume();

     return 0;   
    }
};
