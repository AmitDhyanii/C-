#include <iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int arr[10];
    cout<<arr[n]<<endl;
    //Give error coz taking input from user during runtime. 

     int n;
    cin>>n;
    int* array = new int[n]; //variable size memory
    return 0 ;
}