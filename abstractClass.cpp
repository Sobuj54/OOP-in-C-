#include <iostream>
using namespace std;

// abstract class
class abstractEmployee{
    virtual void promotion()=0;
};

class Employee:abstractEmployee {
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

    void promotion(){
        if(age > 30){
            cout<<"You got promotion."<<endl;
        }
        else{
            cout<<"No promotion for you."<<endl;
        }
    }
};

int main(){

Employee employee1 = Employee("Sobuj", "ABC", 23);
employee1.display();

employee1.setAge(12);
cout<<employee1.getAge()<<endl;
employee1.promotion();

Employee employee2 = Employee("none","abc",35);
employee2.promotion();
}