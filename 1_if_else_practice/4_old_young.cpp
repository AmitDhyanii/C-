#include <iostream>
using namespace std ;
int main()
{
    int person1,person2,person3 ;
    cout<<"Enter the age of 1st,2nd and 3rd person"<<"\n" ;
    cin>>person1>>person2>>person3  ;
    
    if (person1>person2)
    {
        
    
        if (person1>person3)
        {
            cout<<"person1 is the oldest one"<<endl;
        }
        else 
        {
            cout<<"person1 is the youngest one"<<endl;
        }
    }
    if (person2>person1)
    {
    

        if (person2>person3)
        {
            cout<<"person2 is the oldest one"<<endl;
        }
        else 
        {
            cout<<"person3 is the oldest one"<<endl;
        }
    }
    
}