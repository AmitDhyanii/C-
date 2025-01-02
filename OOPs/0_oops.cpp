#include <iostream>
// #include "hero.cpp"
using namespace std ;
class Hero
{
    // properties
    int health;
    char lvl;

    public:
    int getHealth(){
        return health;
    }

    char getLvl(){
        return lvl;
    }

    void setHealth(int h){
        health = h;
    }

    void setLvl(char l){
        lvl = l;
    }
};
int main()
{
    // creation of object.
    Hero h1;

    h1.setHealth(150);
    h1.setLvl('S'); 

    cout<<"health is "<<h1.getHealth()<<endl; 
    cout<<"lvl is "<<h1.getLvl()<<endl; 
    // cout<<"size of h1: "<<sizeof(h1);
    return 0 ;
}