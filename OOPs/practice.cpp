#include <iostream>
using namespace std ;
class Employee
{
    public:
    string name;
    int salary;
};
int main()
{
    // statically allocation
    Employee e1;

    // Dynamically allocaton
    Employee *e2 = new Employee;
    
    cout<<"e2 Name is : "<<(*e2).name<<endl;
    cout<<"e2 salary is : "<<(*e2).salary<<endl; 

    e1.name="Sourbh";
    e1.salary=43000;
    cout<<"e1 Name is : "<<e1.name<<endl;
    cout<<"e1 salary is : "<<e1.salary<<endl; 
    return 0 ;
}