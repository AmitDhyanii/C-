#include <iostream>
using namespace std ;
int main()
{
    char ch;
    cout<<"Enter any alphabat :  ";
    cin>>ch;
    
    if (ch>='a' && ch<='z')
    {
        cout<<"This is lowercase"<<'\n ';
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"This is uppercase"<<'\n ';
    }
    if (ch>=0 || ch<=9)
    {
        cout<<"This is numeric"<<'\n';
    }
    return 0 ;
}

// char ch;
// 'a'--->'z'=This is lowercase
// 'A'--->'Z'=This is upperrcase
// '0'--->'9'=This is numeric
