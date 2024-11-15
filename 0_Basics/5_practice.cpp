#include <iostream>
using namespace std ;
int main()
{
    // n= 564
    // prod=5*6*4
    // sum=5+6+4
    // prod-sum

    int n ;
    cout<<"Enter a digit :\n";
    cin>>n;

    int prod= 1;
    int sum= 0 ;

    while(n!=0)
    {
        int digit = n%10;
        prod=prod*digit;
        sum=sum + digit;

        n = n/10;
    }
    int answer = prod - sum;
    cout<<answer;
    return 0 ;
}



