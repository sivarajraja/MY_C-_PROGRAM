#include<bits/stdc++.h>
using namespace std;

class batsman
{
    public:
       virtual void special()
       {
          cout<<"batsman special shot!"<<endl;
       }

};

class dhoni : public batsman
{
    public:
       void special()
       {
          cout<<"dhoni special shot!"<<endl;
       }

};

class kholi : public batsman
{
    public:
       void special()
       {
          cout<<"kholi special shot!"<<endl;
       }

};

int main()
{
    dhoni d1;
    kholi k1;

    batsman *b1 = &d1;
    batsman *b2 = &k1;

    b1->special();
    b2->special();

    return 0;
}