#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;

    void display (){
        cout<<name<< " "<<company<<" "<<age<<endl;
    }

    // constructor
    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
};

int main(){

Employee employee1 = Employee("Sobuj", "ABC", 23);
employee1.display();

}