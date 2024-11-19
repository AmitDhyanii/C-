#include <iostream>
using namespace std ;
int main()
{
    int arr[10]={2,6,11,22,45};
    cout<<"Address of first element : "<<arr<<endl;
    cout<<"Value at 0 index : "<<arr[0]<<endl;;
    cout<<"Address of first element : "<<&arr[0]<<endl;
    cout<<"Value at 0 index : "<<*arr<<endl;
    cout<<*arr + 1<<endl; 
    cout<<*(arr)+1<<endl;
    cout<<"value at 1 index : "<<*(arr+1)<<endl;

    // arr[i] = *(arr+i)   OR   i[arr] = *(i+arr)

    int i = 3;
    cout<<"Value at 3 index : "<<i[arr]<<endl;

    /* Difference b/w array & pointer */

    // size of array 4 bytes
    // size of pointer 8 bytes

    int temp[10] = {1,2,3,4,5,6,7};
    cout<<sizeof(temp)<<" bytes"<<endl;
    int* p = &temp[0];
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;

    // & operator-->address of ....

    int a[10] = {10,20,30};
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;

    int* ptr = &a[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

    // symbol table content cannot be changed

    int wry[11];
    // wry = wry +1;  -->ERROR

    int* pointer = &wry[0];
    pointer = pointer + 1;
    cout<<pointer;
    

    return 0 ;
} 