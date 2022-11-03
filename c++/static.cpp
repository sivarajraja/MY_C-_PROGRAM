#include<iostream>
using namespace std;

class employee
{
    public:
         static int count;

         void print(string n)
         {
             cout<<"name "<<n<<" count "<<++count<<endl;
         }
         void out(string n)
         {
             cout<<"name "<<n<<"count "<<--count<<endl;
         }

};
int employee::count;
int main()
{
    employee e1;
    e1.print("shiva");
    e1.print("mari");
    e1.print("priyanka");
    e1.out("priyanka");
    e1.out("mari");

    return 0;
}