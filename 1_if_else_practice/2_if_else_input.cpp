#include <iostream>
using namespace std ;
int main()
{
    int age ;
    cout<<"Enter your age:\n" ;
    cin>>age ;

    if(age<0 or age>100)  
    {
        cout<<"Something went wrong\n" ;
    }
    else if(age>18) // else if for multiple condition
    {
        cout<<"You are accepted\n" ;
    }
    else
    {
        cout<<"Go away!!" ;
    }
    return 0 ;
}