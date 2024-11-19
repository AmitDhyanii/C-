#include <iostream>
using namespace std ;
int main()
{
    int a = 10 ;
    cout<<"adress of a : "<<&a<<endl ;  //&a is address of a

    int* p = &a ; //int* data type pointer and p store &a 
    cout<<"adress of a : "<<p<<endl; //&a
    cout<<"value at p : "<<*p<<endl;
    *p = 99999 ;
    cout<<"a : "<<a<<endl ;
    
    return 0 ;
}



