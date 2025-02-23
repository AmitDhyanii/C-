#include <iostream>
#include <queue>
using namespace std ;
int main()
{
    // Priority Queue = Max Heap
    // It always give maximim value
    
    // Max Heap
    priority_queue<int> maxi;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size : "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    // Min Heap
    priority_queue<int,vector<int>,greater<int>> mini;
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<" Empty or not : "<<mini.empty(); 
    return 0 ;
}