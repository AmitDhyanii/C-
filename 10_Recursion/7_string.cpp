#include <iostream>
using namespace std ;
void reverse(int i,int j,string& str)
{
    if(i>j)
    {
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;
    reverse(i,j,str);
}
int main()
{
    // reverse using recursion
    string name = "Amit";
    reverse(0,name.length()-1,name);
    cout<<name;
    return 0 ;
}