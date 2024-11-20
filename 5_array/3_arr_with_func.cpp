#include <iostream>
using namespace std ;

void printArray(int arr[], int size)
{
    cout<<"Printing.....\n";

    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" \n";
    }
    cout<<"Done";
}

int main()
{
    int wryy[20] = {3,4,5,6,7,8,4,4,6,79,5,5,9847,5,7,44};
    printArray(wryy,20);
    return 0 ;
}