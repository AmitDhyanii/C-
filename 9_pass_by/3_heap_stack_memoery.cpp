#include <iostream>
using namespace std ;
int main()
{
    //  heap has larger memory than stack  //

    // int i=0; 
    // int arr[1000];
    //  evrything is stored in stack  //
    //  when we use stack memory its called static memory allocation  //

    //  To use heap memory we use new keyword  //
    //  when we use heap memory its called dynamic memory allocation  //

    new char;
    new int ;
    //  in heap name is not allowed so we use pointers to access //
    char* ptr = new char;
    int* p = new int;
    cout<<p<<endl;

    new int[10];
    int*arr=new int[10];
    cout<<sizeof(arr);

    delete []arr;  // to release dynamic memory we use delete keyword
    delete p;

    return 0 ;
}

