#include <iostream>
using namespace std ;
int main()
{
    int a = 3;
    int b = 2;

    // bitwise AND(&) operator --> Both should be 1 ,otherwise 0
    // bitwise OR(|) operator --> Both should be 0 ,otherwise 1
    // bitwise NOT(~) operator --> Did the opposite
    // bitwise XOR(^) operator --> if both are same then it gives 0 ,otherwise 1
    cout<<(a & b)<<endl;
    cout<<(a | b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a ^ b)<<endl;

    cout<< (30>>1) <<endl;
    cout<< (30>>2) <<endl;
    cout<< (3<<1) <<endl;
    cout<< (3<<2) <<endl;

    cout<<a++ <<endl;   //  post increament
    cout<<++a <<endl;   //  pre  increament
    return 0 ;
}