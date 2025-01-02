// Invoke at the time of object creation.
// no return type.
// no input parameter.

#include <iostream>
using namespace std ;
class Hero{
    public:
    int Titans;
    // Default constructor
    Hero(){
        cout<<"constructor called"<<endl;
    }

    // parameterized constructor
    Hero(int Titans){
        this->Titans=Titans;
    }
};
int main()
{
    Hero ErenYeager(3);
    // ErenYeager.Titans=3;
    cout<<ErenYeager.Titans<<endl;
    return 0 ;
}