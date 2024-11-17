#include <iostream>
using namespace std ;
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        cout<< i <<" ";
        sum=sum+i ;
    }
    cout<<"The sum of first 10 natural numbers: "<<sum<<endl;
    return 0 ;
}