#include <iostream>
using namespace std ;


//fun dec.

// syn :: <return type> <fun_name>(<parameter>)
       //{<code>}

void print_hw()
{
    cout<<"hellow world\n" ;
}

int sum(int x , int y=0)
{
    int ans = x+y ;
    return ans ;
}

void sum2(int x , int y)
{
    int ans = x+y ;
}
int main()
{
    // cout<<print_hw() ; err : can't use cout in void
    print_hw() ;
    print_hw() ; 

    int var = sum(1,2) ;
    cout<<var<<endl ;


    int num1 = 22 ; 
    int num2 = 11 ;
    int var2 = sum(num2) ;
    cout<<var2;
    return 0 ;
}