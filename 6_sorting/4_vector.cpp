#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    vector<int>a(5,1);
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int>last(a);
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;


    vector<int> v;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"size : "<<v.size()<<endl;

    cout<<"Element at 2 index : "<<v.at(2)<<endl;
    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
        cout<<endl;

    cout<<"After pop"<<endl;
    v.pop_back();
    for(int i:v)
    {
        cout<<i<<" ";
    }
        cout<<endl;
    v.clear();
    cout<<"size : "<<v.size()<<endl;


    return 0 ;
}


