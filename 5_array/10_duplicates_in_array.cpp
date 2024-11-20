#include <iostream>
using namespace std ;
int main()
{
    int arr[7] = {2,9,1,4,1,6,28};
    int ans=0;

    for(int i = 0 ; i<7 ; i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i=1 ; i<7 ; i++)
    {
        ans=ans^i;
    }
    cout<<ans;
    return 0 ;
}