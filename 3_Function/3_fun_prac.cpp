#include <iostream>
using namespace std ;

int add_num (int a , int b)
{
    return a+b ;
}
int main()
{
    int num1,num2;
    
    cin>>num1;
    cin>>num2;
    int c = add_num(num1,num2);
    cout<<c/2;
    return 0 ;
}




