#include<iostream>
using namespace std;

class combin
{
    public:
    void Find_value()
    {
        for(int i=1; i<=10; i++)
            for(int j=1; j<=10; j++)
                 for(int k=1; k<=10; k++)
                 {
                     if(i+j+k == 10)
                     cout<<i<<" "<<j<<" "<<k<<endl;
                 }
    }

};
int main()
{
    combin c1;
    c1.Find_value();

    return 0;
}