// #include <iostream>
// #include <math.h>
// using namespace std ;
// int main()
// {
//     int n ;
//     cout<<"Enter any number ";
//     cin>>n;
//     int ans=0;

//     while(n!=0)
//     {
//         int digit = n%10;
//         ans = (ans*10)+digit;
//         n = n/10;
//     }
//         cout<<ans;
//     return 0 ;
// }


#include <iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter any number to reverse"<<endl;
    cin>>n;
    int ans = 0;

    while(n!=0)
    {
        int digit = n%10;
        ans = (ans*10) + digit;
        n = n/10;
    }
    cout<<ans;

    return 0 ;
}


