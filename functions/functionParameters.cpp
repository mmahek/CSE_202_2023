#include <iostream>
using namespace std;


// void printName(/*parameter*/ string name = "World")
// // when name is specified to be world here is is by default set as world
// //this is default argument
// {
//     cout << "The Name is : " << name << endl;
// }
// int main()
// {
//     printName(/*Argument*/"Mayank");
//     // here when argument is set to be mayank the older name is overwritten and this is displayed
// }

// void fullName( string firstName, string lastName)
// {
//     cout << "First name is : " << firstName << " and the last Name is : " << lastName ;
// }
// int main(){
//     fullName("Hello", "World");
// }
// void credentials(string name, float marks)
// {
//     cout << "My name is  " << name << " And my marks were  " << marks << "%" ;
// }

int add(int num1, int num2)//int type function (user defined int type functions only) needs return , specify the type you are looking for
{
    return num1+num2;
}

int main(){// whereas int main fuction doesnot require this methodology, it understands the return type and doesnot asks for return type
    // credentials("Mahek", 92.2 );/
    cout << add(2, 5);
}
