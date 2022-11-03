#include<iostream>
using namespace std;

class check_Constructor
{
    public:

        check_Constructor()     //it is a default constructor
        {
            cout<<"\nDEFAULT CONSTRUCTOR !"<<endl;
        }

        check_Constructor(int a,int b)     //it is a parameter constructor
        {
            cout<<"PARAMETERAISED CONSTRUCTOR !\nTHE VALUE OF \"A\" AND \"B\" is "<<a<<" and "<<b<<endl;
        }

        void Normal_Function()      //it is a normal function
        {
            cout<<"NORMAL CONSTRUCTOR !\n"<<endl;
        }

};

int main()
{
    check_Constructor c1;        //it is a default constructor
    check_Constructor c2(11,9);  //it is a parameter constructor
    c1.Normal_Function();        //it is a normal function


    return 0;
}