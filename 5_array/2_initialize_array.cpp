//     Array is used to store similar type/kind of items.
//     contigous Memory locations.
//     indexing starts from 0.
//     index = 0 - (n-1)

//     Initialisation
//     int arr[3] = {3,5,7};
//     int boom[100000]={0};  Everywhere 0
//     int boom[100000];      Garbage value everywhere

//     How to initialise entire with any value      //
//     fill_n Command
//     int array[10000];
//     fill_n(array,10000,1); 

//     int wry[15] = [3,5,7];  after 3,5,7 other value become 0 .









#include <iostream>
using namespace std ;
int main()
{
    int size ;
    cout<<"How many elements u want :"<<endl;
    cin>>size;
    int arr [size];
    cout<<"Enter" << size << "elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        cout<<arr[i];
    }
    
    return 0 ;
}