#include <iostream>
using namespace std;

struct employee
{
    int empId;
    float salary;
    int age;
};
//can be done in this way as well, specify the function and then give the definition later

void displayInfo( employee);

// void displayInfo(employee emp)
// {
//     cout << "Age is : " << emp.age << endl;
//     cout << "Salary is : " << emp.salary << endl;
//     cout << "EMployee ID is : " << emp.empId << endl;
// }

int main()
{
    employee E1, E2;

    E1.age = 30;
    E1.salary = 1000;
    E1.empId = 001;

    E2.age= 22;
    E2.salary = 2000;
    E2.empId = 002;

    displayInfo(E1);
    displayInfo(E2);

    return 0;
}

void displayInfo(employee emp)
{
    cout << "Age is : " << emp.age << endl;
    cout << "Salary is : " << emp.salary << endl;
    cout << "EMployee ID is : " << emp.empId << endl;
}