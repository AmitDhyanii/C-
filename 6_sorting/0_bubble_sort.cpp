// Bubble sort is easy to understand and implement.
// It does not require any additional memory space.
// It’s adaptability to different types of data.

#include <iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"Enter number of elements you want to insert"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<< "  elements"<<endl;
    int i=0;
    for( i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(  i=1;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])

                swap(arr[j],arr[j+1]);

        }
    cout<<arr[i]<<endl;
    }
    return 0 ;
}




