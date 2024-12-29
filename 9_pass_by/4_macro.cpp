#include <iostream>
using namespace std ;

#define PI 3.14

int main()
{
    // A piece of code in a program that is replaced by value of macro
    // macro did not take extra storage like variable

    int r = 5;
    double area = PI*r*r;
    cout<<"Area is : "<<area<<endl;

    return 0 ;
}