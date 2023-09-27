#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string name, int age){
        
    }
    
    void displayInfo(){
        cout << "Name is " << name << endl;
        cout << "Age is " << endl;

    }
};
class Employee : public Person{
    int employeeId;
    double salary;

    public:
    Employee(int employeeId,double salary){

    }
    public:
    void displayInfo(){
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
        cout <<"Employee Id is " << employeeId << endl;
        cout <<"Salary is " << salary << endl;
    }
};
int main(){
    Person person1("Alice", 30);
    Employee employee1("Bob", 25, 1001, 50000.0);

    person1.displayInfo();
    employee1.displayInfo();
    return 0;
}