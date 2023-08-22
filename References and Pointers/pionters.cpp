// pointers are variables that stores value of memory address of another variable. it is a hexadecimal value. 
//pointer points at the memory block whose value it has stored in it.

#include <iostream>
using namespace std;
int main(){

    int var = 10;
     int *ptr = &var; //this is a pointer variable
     cout << &var << endl; //both these &var and ptr will print address of var variable
     cout << ptr << endl;
     cout << *ptr<< endl; //this prints the value of variable whose address is stored in the pointer
    return 0;
}