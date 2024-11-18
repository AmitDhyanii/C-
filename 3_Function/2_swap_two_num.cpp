// #include <iostream>
// using namespace std ;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     int c = a;
//     a=b;
//     b=c;
//     cout<<a<<endl<<b;

//     return 0 ;
// }



// #include <iostream>
// using namespace std ;
// int main()
// {
//     int a = 1 ;
//     int b = 88 ;
//     swap(a,b) ;
//     cout<<a<<" "<<b<<endl;
//     return 0 ;
// }




#include <iostream>
using namespace std ;
int main()
{
    int a = 2;
    int b = 88;

    b = a+b;
    a = b-a;
    b = b-a;

    cout<<a<<endl<<b;
    return 0 ;
}


