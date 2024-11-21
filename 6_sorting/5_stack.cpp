#include <iostream>
#include <stack>
using namespace std ;
int main()
{
    stack<string> s;
    s.push("Amit");
    s.push("Dhyani");
    s.push("don");
    cout<<"Element at top : "<<s.top()<<endl;
    s.pop();
    cout<<"Element at top : "<<s.top()<<endl;
    cout<<"size : "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty();

    return 0 ;
}