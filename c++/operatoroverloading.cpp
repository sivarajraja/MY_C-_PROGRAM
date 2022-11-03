#include<iostream>
using namespace std;

class matrix
{
    private:
    int a[3][3] , b[3][3];

    public:
    void getvalue();
    void display();

    void operator ~()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                b[i][j]=a[j][i];
            }
            
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                a[i][j]=b[i][j];
            }
            
        }

    }

};

void matrix :: getvalue()
{
    cout<<"enter the matrix value :"<<endl;

    for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }

        }
}

void matrix :: display()
{
    for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;

        }

}

int main()
{
    matrix m1;

    m1.getvalue();
    cout<<"Before transforce the matrix : "<<endl;
    m1.display();
    ~m1;
    cout<<"After transforce the matrix : "<<endl;
    m1.display();

    return 0;
}