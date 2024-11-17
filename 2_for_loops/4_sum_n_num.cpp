#include <iostream>
using namespace std ;
int main()
{
    int n,sum=0;
    cout<<"Enter any natural number : ";
    cin>>n;

    for(int i=1;i<=n;++i)
    {
        cout<< i <<" ";
        sum+=i;
    }
    cout<<"\n The sum of natural number is :"<<sum<<endl;
    return 0 ;
}