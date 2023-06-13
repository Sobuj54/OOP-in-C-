#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void display (){
        cout<<Name << " "<<Company << " "<< Age << endl;
    }
};

int main(){
    Employee employee1;
    employee1.Name = "sobuj";
    employee1.Company = "abc";
    employee1.Age = 23;
    employee1.display();
}