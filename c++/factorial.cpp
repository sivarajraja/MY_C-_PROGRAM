#include<iostream>
using namespace std;

class Factorial
{
    public:
    int n,i,j=1;

    void Get_Number(int a)
    {
        n=a;
    }

    void Process()
    {
        cout<<"FACTORIAL SERIES:"<<endl;

        for(i=1; i<=n; i++)
        {
            if(i==1)
                cout<<i;
            
            else
                cout<<"*"<<i;
            
            j*=i;
        }

        cout<<endl;
    }

    void Print_Number()
    {
        cout<<"FACTORIAL OF "<<n<<" IS :"<<j<<endl<<endl;
    }

};

int main()
{
    Factorial f1;
    int a;
    cout<<"enter a limit of factorial :"<<endl;
    cin>>a;

    f1.Get_Number(a);
    f1.Process();
    f1.Print_Number();

    return 0;
}