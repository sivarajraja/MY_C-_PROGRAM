#include<iostream>
using namespace std;

class employee
{
    public:
        int no;
        string name;
        float salary;
    
    void EmployeeSalary();

};

    void employee :: EmployeeSalary()
    {
        cout<<no<<" . "<<name<<" salary is "<<salary<<endl;
    }


int main()
{
    employee e1;

    e1.no=1;
    e1.name="shiva";
    e1.salary=11111;

    e1.EmployeeSalary();

    return 0;
}