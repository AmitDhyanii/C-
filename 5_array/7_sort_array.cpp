#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
    int size;
    cout<<"How many elements u wanna insert "<<endl;
    cin>>size;
    int arr[size] ;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    
    sort(arr,arr+size);
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        cout<<arr[1]<<endl;
        cout<<arr[size-2];

    return 0 ;
}