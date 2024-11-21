#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(15);

    cout<<binary_search(v.begin(),v.end(),9)<<endl;

    int a=8;
    int b=11;
    cout<<"max :"<<max(a,b)<<endl;
    cout<<"min :"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    string st="abcd";
    reverse(st.begin(),st.end());
    cout<<"st : "<<st<<endl;
    
    return 0 ;
}



