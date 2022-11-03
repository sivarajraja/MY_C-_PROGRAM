#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"enter a number:" <<endl;
    cin >> a;

    switch (a)
    {
      
          case 1:
            cout<<"entered 1";
            break;

        case 2:
          cout<<"entered 2";
          break;  

          case 3:
            cout<<"entered 3";
            break;  
    
            default:cout<<"wrong!";
    }
return 0;   
}