// Ability to take more than 1 form.
// poly means many    // morph means form
// 
// Two types 
// 
// 1 ->compile time
// a ->function overloading
// b ->operator overloading

// 2 ->run time
// a ->function overriding
#include <iostream>
using namespace std ;
class A{
    public:

    // Method overloading

    void sayHello(){
        cout<<"hello there"<<endl;
    }
    void sayHello(string name){ 
        cout<<"moshi moshi"<<endl;
    }
    void sayHello(char num){
        cout<<"Hola"<<endl;
    }
    void sayHello(int num){
        cout<<"Namaste"<<endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Eren");
    obj.sayHello('S');
    obj.sayHello(1);
    return 0 ;
}
