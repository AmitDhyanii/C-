#include <iostream>
using namespace std ;
int main()
{
    string str="moon";
    int s=0;
    int e=3;
    while(s<e)
    {
        if(str[s]!=str[e])
        {
            cout<<"Its not palindrome";
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    cout<<"Its palindrome";
    return 0 ;
}