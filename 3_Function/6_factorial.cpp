#include <iostream>
using namespace std ;

int factorial(int n)
{
    int fact = 1;

    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}

int main()
{
    int a=9;
    int b=5;
    cout<<factorial(a) <<nCr(a,b);
    return 0 ;
}

 