// #include <iostream>
// using namespace std ;
// int main()
// {
//     string Name="Amit Dhyani";
//     cout<<"Length of Name "<<Name.length();
//     return 0 ;
// }


#include <iostream>
using namespace std ;
int main()
{
    string name = "Amit Dhyani";
    int count=0;
    for(int i=0;name[i];i++)
    {
        count++;
    }
    cout<<count;
    return 0 ;
}