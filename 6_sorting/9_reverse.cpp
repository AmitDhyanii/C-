#include <iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int s=0;
    int e=5;
    int i=0;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    return 0 ;
}