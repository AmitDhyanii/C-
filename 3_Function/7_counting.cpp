#include <iostream>
using namespace std ;

//Function signature
void printcounting(int n)
{   //Function body

    for(int i=1; i<=n; i++)
    {
        cout<< i <<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    // Function Call
    printcounting(n);
    return 0 ;
}

