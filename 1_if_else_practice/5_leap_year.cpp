#include <iostream>
using namespace std ;
int main()
{
    long year;
    cout<<"Enter year"<<'\n';
    cin>>year ;
    if (year%4==0)
    {
        cout<<"It is a leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year"<<endl;
    }
    return 0 ;
}
