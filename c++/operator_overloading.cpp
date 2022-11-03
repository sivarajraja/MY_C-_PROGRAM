#include<bits/stdc++.h>
using namespace std;

class student
{
    private:
      int mark;

    public:
      student(int m)
      {
        mark = m;
      }

      student operator+(student const &obj)
      {
         student temp;
         temp.mark = mark + obj.mark;
         return temp;
      }

      void print()
      {
        cout<<mark;
      }

};

int main()
{
    student s1(10), s2(10);
    student s3 = s1+s2;
    s3.print();

    return 0;
}