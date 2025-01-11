// Encapsulation = wrap up of data member and functions.
// fully encapsulaton means all data members are private.

// Advantages
// 1 -> Data or information hiding
// 2 -> Code reusability
// 3 -> Marked as read only
// 4 -> Code is better for Unit testing

#include <iostream>
using namespace std ;
class Student{

    // ENCAPSULATION

    // Private Data members
    private:
    string name;
    int age;
    float height;
    
    // Function
    public:
    int getAge(){
        return age;
    }

};
int main()
{
    Student s1;
    cout<<"s1 Age is "<<s1.getAge()<<endl;
    return 0 ;
}