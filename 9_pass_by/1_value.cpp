// #include <iostream>
// using namespace std ;

// /*   pass by value --> Same name different memory  */ 

// int update(int n)    
// {
//     n++;
// }
// int main()
// {
//     int n = 5;
//     cout<<"Before "<<n<<endl;
//     update(n);
//     cout<<"After "<<n<<endl;
//     return 0 ;
// }



#include <iostream>
using namespace std ;

/*    Pass by Reference --> Same memory but different names   */
int update(int& m)
{
    m++;
}
int main()
{
    int n = 2;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
    return 0 ;
}