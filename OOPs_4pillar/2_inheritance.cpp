#include <iostream>
using namespace std ;
class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight (int w){
        this->weight=w;
    }
};

class Male: public Human{

    public:
    string color;

};
int main()
{
    Male obj1;
    cout<<obj1.height<<endl;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;

    obj1.setWeight(90);
    cout<<"Weight is "<<obj1.weight<<endl;
    return 0 ;
}


