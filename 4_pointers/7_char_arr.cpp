#include <iostream>
using namespace std ;
int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[5]="abcd";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char* p = &ch[0];
    cout<<p<<endl;

    char temp = 'z';
    char* ptr = &temp;
    cout<<ptr<<endl;
    return 0 ;
}