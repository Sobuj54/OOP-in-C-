#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    string company;
    int age;

    public:
    // setter method
    void setAge (int Age){
        if(Age >= 20)
        age = Age;
    }
    // getter method
    int getAge(){
        return age;
    }

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

employee1.setAge(12);
cout<<employee1.getAge()<<endl;

}