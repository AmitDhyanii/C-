#include <iostream>
using namespace std ;
int firstoccurance(int arr[],int n,int key)
{
    int s=0  ,  e=n-1;
    int mid=s+(e-s)/2;

    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;  // to find first occurance.
            //s=mid+1;  // to find last occurance.
        }

        else if(arr[mid]>key)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastoccurance(int arr[],int n,int key)
{
    int s=0  ,  e=n-1;
    int mid=s+(e-s)/2;

    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            //e=mid-1;  // to find first occurance.
            s=mid+1;  // to find last occurance.
        }

        else if(arr[mid]>key)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{ //1 2 3 2 3 1 4 1 2 3 3 
    int wry[7]={1,2,3,3,3,4,4};
    int first =firstoccurance(wry,7,3);
    int last  =lastoccurance(wry,7,3);
    cout<<"First occurance of 3 is at index :  "<<first<<endl;
    cout<<"Last occurance of 3 is at index  :  "<<last<<endl;
    int totaloccurance=(last-first)+1;
    cout<<totaloccurance;
    return 0 ;
}