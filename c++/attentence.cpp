#include<iostream>
using namespace std;

int main()
{
    int Present=0,Absent=0;
    int n,i;
    int Answer;

    cout<<"ENTER A TOTAL NUMBER OF STUDENTS:"<<endl;
    cin>>n;

    for(i=1; i<=n; ++i)
    {
        cout<<"ROLL NO "<<i<<endl;
        cout<<"ENTER 1 FOR PRESENT!\nENTER 0 FOR ABSENT!\n";
        cin>>Answer;

        if(Answer==1)
             Present+=1;

        else if(Answer==0)
             Absent+=1;

        else
             cout<<"you entered wrong option for roll no "<<i<<endl;     
        
    }
    
    cout<<"***** SRM INSTITUTE OF SCIENCE AND TECHNOLOGY *****\n\n";

    cout<<"------------------------------------\n";
    cout<<"\tTOTAL NUMBER OF STUDENTS : "<<n<<endl;
    cout<<"\tNUMBER OF PRESENT : "<<Present<<endl;
    cout<<"\tNUMBER OF ABSENT : "<<Absent<<endl;
    cout<<"------------------------------------";

  return 0;  
}