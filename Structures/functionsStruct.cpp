#include <iostream>
using namespace std;

struct employee
{
    int empId;
    float salary;
    int age;
};

// can be done in this way as well, specify/declaring the function and then give the definition later

void displayInfo(employee);

// void displayInfo(employee emp)
// {
//     cout << "Age is : " << emp.age << endl;
//     cout << "Salary is : " << emp.salary << endl;
//     cout << "EMployee ID is : " << emp.empId << endl;
// }

int main()
{
    employee E1, E2; // variables for the user defined structure

    E1.age = 30; // input the values for user defined variables
    E1.salary = 1000;
    E1.empId = 001;

    E2.age = 22;
    E2.salary = 2000;
    E2.empId = 002;

    displayInfo(E1); // calling the function to display the input information. when compiler sees this LOC, it goes to the function and replaces the value E1 everywhere and outputs the values input by user
    displayInfo(E2);

    return 0;
}

// defining the function declared above

void displayInfo(employee emp) // emp will be replaced by the variable and hence the corresponding value for each variable will be displayed via the displayInfo function
{
    cout << "Age is : " << emp.age << endl;
    cout << "Salary is : " << emp.salary << endl;
    cout << "Employee ID is : " << emp.empId << endl;
}