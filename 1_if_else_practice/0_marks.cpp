#include <iostream>
using namespace std ;
int main()
{
    int marks;
    cout<<"Enter your marks";
    cin>>marks ;
    if (marks<=0 or marks>100)
    {
        cout<<"Invalid" ;
    }
    else if (marks<=30)
    {
        cout<<"Fail" ;
    }
    else if(marks>=30 and marks<50)
    {
        cout<<"Average score" ;
    }
    else if(marks>=50 and marks<70)
    {
        cout<<"Good score" ;
    }
    else if(marks>=70 and marks<90)
    {
        cout<<"Merit" ;
    }
    else if(marks>=90 and marks<100)
    {
        cout<<"Excellent" ;
    }
    else 
    {
        cout<<"Brilliant";
    }
    return 0 ;
}
/*if less than 30 fail
30-50 average score
50-70 good score
70-90 merit
90-100 Excellent 
== 100 brilliant
if marks less than 0 or greater than 100 == invalid*/

