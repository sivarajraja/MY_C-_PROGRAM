#include<iostream>
using namespace std;

class ascending
{
    public:
    int a[12],b;
    void Get_Value()
    {
        cout<<"enter the 10 numbers : ";
        for(int i=0; i<10; i++)
        cin>>a[i];
    }

    void Assign_Value()
    {
        for(int l=0; l<9; l++)
        {
            for(int j=l+1; j<9; j++)
            {
                if(a[l]>a[j])
                {
                    b=a[l];
                    a[l]=a[j];
                    a[j]=b;
                }
            }
        }
    }

    void Print_Value()
    {
        cout<<"ASCENDING ORDER :"<<endl;

        for(int k=0; k<9; k++)
        {
            cout<<a[k]<<endl;
        }
    }

};

int main()
{
    ascending a1;
    a1.Get_Value();
    a1.Assign_Value();
    a1.Print_Value();

    return 0;
}