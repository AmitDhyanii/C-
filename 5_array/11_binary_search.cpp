#include <iostream>
using namespace std ;
int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return arr[mid];
        }
        if(key>arr[mid])
        {
            start= mid+1;
        }
        else{
            start=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,6,8,14,22,56};
    int odd[10]={1,3,7,9,17,23,33,41,53,69};

    int print=binarysearch(even,6,22);
    int wry=binarysearch(odd,10,41);
    
    cout<<print<<endl;
    cout<<wry<<endl;
    return 0 ;
}