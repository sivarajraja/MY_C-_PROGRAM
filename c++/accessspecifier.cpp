#include<iostream>
using namespace std;

class BankDetails
{
    private:
    double balance=0;

    public:
    string name;
    string number;

    void CheckBalance()
    {
        cout<<"balance is "<<balance<<endl;
    }

    int CreditAmount(int CA)
    {
        balance += CA;
        return balance;
    }

    int DebitAmount(int DA)
    {
        balance -= DA;
        return balance;
    }

};


int main()
{
    BankDetails b1;

    b1.name="shiva";
    b1.number="RA2111003050036";
    b1.CreditAmount(10000);
    b1.DebitAmount(7000);

    b1.CheckBalance();

    return 0;
}