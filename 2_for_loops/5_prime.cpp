#include <iostream>
using namespace std ;
int main()
{
    int num,ctr=0; 
    cout<<"Input a number to check prime or not: " ;
    cin>>num;
    for ( int i = 1; i <=num ; i++)
    {
        if (num%i==0)
        {
            ctr++;
        }
    }
    if (ctr==2)
    {
        cout<<"The number is prime . \n" ;
    }
    else
    {
        cout<<"The number is not prime . \n" ;
    }
    
    return 0 ;
}