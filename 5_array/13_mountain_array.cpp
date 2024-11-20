#include <iostream>
using namespace std ;

int mountainArray(int arr[], int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int even[8]={0,1,2,3,4,3,2,1};
    int print=mountainArray(even,8);
    cout<<print;
    return 0 ;
}

