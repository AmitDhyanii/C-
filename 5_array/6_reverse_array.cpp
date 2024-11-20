// #include <iostream>
// using namespace std ;
// int main()
//       **  Reverse using for loops  **
// {
//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     for(int i=8;i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0 ;
// }

#include <algorithm>
#include <iostream>
using namespace std ;
int main()
{
    int arr[] = {199,299,30,40,50,60,70,80,90};
    int n = 9;
    reverse(arr,arr+n);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0 ;
}

