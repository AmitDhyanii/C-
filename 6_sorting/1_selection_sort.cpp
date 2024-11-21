// Simple and easy to understand.
// Preserves the relative order of items with equal keys which means it is stable.
// Works well with small datasets.
// It is adaptable to various types of data types.
// Selection sort is an in-place sorting algorithm, 
//    which means it does not require any additional memory to sort the list.

#include <iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"Enter number of elements you want to insert"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<< "  elements"<<endl;

    int i;
    int j;

    for( i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }

    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for( j=i+1;j<size;j++)
    {
        if(arr[j]<min)
        {
            min=j;
        }
        swap(min,arr[i]);
    }
    cout<<arr[i];
    }
    

    
    
    return 0 ;
}


