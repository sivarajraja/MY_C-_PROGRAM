#include<iostream>
#include<cstring>
using namespace std;

class Name_List
{
    private:
        int N_Number;
        char N_Name[20];

    public:

    void Get_Name(char name[20], int n)
     {
         strcpy(N_Name,name);
         N_Number=n;
     }

    void Print_Name()
    {
        cout<<"NAME = "<<N_Name<<endl;
        cout<<"ROLL NO = "<<N_Number<<endl;
    }

};

int main()
{
    Name_List *n1;
    n1->Get_Name("shiva",11);
    n1->Print_Name();
    n1++;

    n1->Get_Name("prasanna",23);
    n1->Print_Name();
    n1++;

    n1->Get_Name("karthick",6);
    n1->Print_Name();
    n1++;

    return 0;
}