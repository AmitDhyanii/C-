// Rules
// same function name
// same parameters
// can be done using inheritance
#include <iostream>
using namespace std ;
class Human{
    public:
    void SayMyName(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Human{
    public:
    void SayMyName(){
        cout<<"Barking"<<endl;
    }
};
int main()
{
    Dog Iggy;
    Iggy.SayMyName();
    return 0 ;
}