#include <iostream>
using namespace std ;
class Animal
{
    int age;
    string name;

    public:
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }

    void setAge(int a){
        age=a;
    }
    void setName(string n){
        name=n;
    }
};
int main()
{
    Animal dog;
    dog.setAge(5);
    dog.setName("Iggy");

    cout<<" Dog name : "<<dog.getName()<<endl;
    cout<<" Dog age : "<<dog.getAge()<<endl;
    return 0 ;
}