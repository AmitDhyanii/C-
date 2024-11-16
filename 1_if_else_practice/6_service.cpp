#include <iostream>
using namespace std ;
int main()
{
    int age;
    cout<<"Enter your age"<<'\n';
    cin>>age;
    string sex,male,female;
    cout<<"Enter your sex "<<'\n';
    cin>>sex;
    string marital_status;
    cout<<"Enter your marital status"<<'\n';
    cin>>marital_status;
    if (age<20 or age>60)
    {
        cout<<"Error 404"<<endl ;
    }
    else if (sex!=male)
    {
        cout<<"you can work only in urban areas"<<'\n';
    }
    else if (sex==male )
    {
        cout<<"you can work anywhere "<<'\n';
    }
    else
    {
        cout<<"you can work in urban areas only"<<'\n';
    }
    return 0 ;
}