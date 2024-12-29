#include <iostream>
using namespace std ;

int sus = 15;  // Global variable
// Global variable --> Bad practice.
// it can change in any function.

void a(int& i)
{
    cout<<i<<endl;
    cout<<sus<<endl;
}

void b(int& i)
{
    cout<<i<<endl;
    cout<<sus<<endl;
}
int main()
{
    int i = 6;
    a(i);
    b(i);
    cout<<sus<<endl;
    return 0 ;
}