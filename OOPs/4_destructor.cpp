// Invoke at the time of object creation.
// no return type.
// no input parameter.
#include <iostream>
using namespace std ;
class Hero{
    public:
    int titans;

    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    Hero Eren;
    Eren.titans=3;
    cout<<Eren.titans<<endl;

    Hero *b = new Hero;
    return 0 ;
}