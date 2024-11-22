#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
    string name;
    cout<<"Enter your name :";
    cin>>name;
    int n = name.length();
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<name;
    return 0 ;
}
// b n m j        // j m n b 



