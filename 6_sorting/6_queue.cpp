#include <iostream>
#include <queue>
using namespace std ;
int main()
{
    queue<string> q;
    q.push("Amit");
    q.push("Dhyani");
    q.push("Don");
    cout<<"Element at Top :"<<q.front()<<endl;
    cout<<"Element at Last :"<<q.back()<<endl;
    q.pop();
    cout<<"Element at Last :"<<q.back()<<endl;
    cout<<"Element at first :"<<q.front()<<endl;
    
    return 0 ;
}