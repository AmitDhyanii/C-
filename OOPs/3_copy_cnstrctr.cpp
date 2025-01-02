#include <iostream>
using namespace std ;
class Hero{
    int titans;

    public:

    // copy constructor
    Hero(Hero& temp){
        cout<<"copy const called"<<endl;
        this ->titans = temp.titans;
    }
    void print(){
        cout<<"Titans : "<<this->titans<<endl;
    }

    int getTitans(){
        return titans;
    }

    void setTitans(int t){
        titans = t;
    }
};
int main()
{
    Hero Eren(3);
    Eren.print();

    // copy constructor
    Hero FYmir(Eren);
    FYmir.print();
    return 0 ;
}