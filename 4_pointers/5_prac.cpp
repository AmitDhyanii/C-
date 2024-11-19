#include <iostream>
using namespace std ;
int main()
{
    // copying a pointer
    int num = 5;
    int* p = &num;

    int* q = p;

    cout<<p<<" _ "<<q<<endl;
    cout<<*p<<" _ "<<*q<<endl;

    //important concept
    int a=2;
    int* ptr = &a;

    cout<<"before "<<ptr<<endl;
    ptr++;
    cout<<"after "<<ptr<<endl;

    cout<<"before "<<*ptr<<endl;
    *ptr=*ptr+1;
    cout<<"after "<<*ptr<<endl;

    return 0 ;
}