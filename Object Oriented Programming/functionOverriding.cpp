#include<iostream>
using namespace std;

class Base{
    public:

    //virtual keyword overrides functions
    
    virtual void print(){
        cout << "From base" << endl;
    }
};

class Derived : public Base{//child class
    public:
    void print(){
        cout << "From Derived " << endl;
    }
};

//same function is base class and derived class have  
int main(){
    Derived d1;
    Base* b1 = &d1;//b1 is a pointer of base class type which is pointing to the address of d1 object
    b1->print();//prints "From Base"
    //pointer variable will use arrow to access it

    //d1.print(); //prints "From Derived"
    return 0;
}
/*
    Function Overriding: 
    We have same function is base class and derived class, when we call the function using the object of derived class, the function of derived cass is executed instead of the base class.

    When we class print() using d1, it overrides the print() of base class.
    It's runtime polymorphism because the function call is not resolved by the compiler at runtime instead.
*/