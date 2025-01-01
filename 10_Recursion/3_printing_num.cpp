#include <iostream>
using namespace std ;
void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;    // it goes with flow
    print(n-1);
    // cout<<n<<endl;  // it will go opposite
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0 ;
}