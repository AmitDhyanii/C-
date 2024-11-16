#include <iostream>
using namespace std ;
int main()
{
    double a,b;
    int choice;
    cout<<"Enter any two number\n";
    cin>>a;
    cin>>b;
    cout<<"Choose operation\n";
    cout<<"1 for ADDITION"<<endl;
    cout<<"2 for SUBTRACTION"<<endl;
    cout<<"3 for MULTIPLICATION"<<endl;
    cout<<"4 for DIVISION"<<endl;
    
    cin>>  choice;
    if( choice==1)
    {
        cout<<a+b;
    }
    else if(choice==2)
    {
        cout<<a-b;
    }
    else if(choice==3)
    {
        cout<<a*b;
    }
    else if(choice==4)
    {
        cout<<a/b;
    }
    else
    {
        cout<<"Something went wrong";
    }
    return 0;
}