#include <iostream>
using namespace std ;
void pass_by_value(int a , int b)
    {
        int c = a;
        a = b;
        b = c;
    }
void pass_by_ref(int &a , int &b)
    {
        int c = a;
        a = b;
        b = c;
    }

int main()
{
    int num1=3 ;
    int num2=6 ;
    pass_by_value(num1,num2);
    cout<<num1<<endl<<num2;

    int a = 4 ;
    pass_by_ref(num1,num2);
    cout<<num1<<endl<<num2;
    return 0 ;
}

