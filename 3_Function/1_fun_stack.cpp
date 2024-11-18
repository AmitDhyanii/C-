#include <iostream>
using namespace std ;

void hel3()
{
    cout<<"hellow 3 st\n" ;
    cout<<"hellow 3 end\n " ;
}
void hel2()
{
    cout<<"hellow 2 st\n" ;
    hel3() ;
    cout<<"hellow 2 end\n " ;
}
void hel1()
{
    cout<<"hellow 1 st\n" ; 
    hel2() ;
    cout<<"hellow 1 end\n " ;
}

int main()
{
    hel1() ;
    return 0 ;
}