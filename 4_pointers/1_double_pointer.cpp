#include <iostream>
using namespace std ;
int main()
{
    int a =11;
    int* p = &a;
    int** pp = &p;
    cout<<pp;
    return 0 ;
}

