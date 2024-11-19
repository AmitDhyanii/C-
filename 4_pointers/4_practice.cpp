// #include <iostream>
// using namespace std ;
// int main()
// {
//     int num =5;
//     int* p =&num;
//     cout<<p<<endl;
//     cout<<*p<<endl;

//     int* q =0;
//     q=&num;
//     cout<<q<<endl;
//     cout<<*q<<endl;
//     return 0 ;
// }



#include <iostream>
using namespace std ;
int main()
{
    int a=5;
    int* p=&a;
    cout<<"before "<<a<<endl;
    (*p)++;
    cout<<"after "<<a<<endl;

    return 0 ;
}