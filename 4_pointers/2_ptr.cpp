#include <iostream>
using namespace std ;
int main()
{
    int num = 5;
    int* ptr = &num;
    cout<<"Address of num : "<<ptr<<endl;
    cout<<"value at ptr : "<<*ptr<<endl;  // * is dereference operator.

    double d=6.6;
    double* p=&d;
    cout<<"Address of d : "<<p<<endl;
    cout<<"Value at p : "<<*p<<endl;

    cout<<"Size of integer is : "<<sizeof(num)<<endl;
    cout<<"Size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is : "<<sizeof(p)<<endl;


    return 0 ;
}