#include <iostream>
using namespace std;
class B; // this required as class B is not declared before line 16
// we need to forward declare the class B for compiler to be assured of its existance otherwise it will say," see i don't know what is class B thus i am not able to comprehend the given argument."
// simply is is like saying, " don't take tension mr. method class B exists just trust me! you will encounter it later in the code."
class A
{
    int data; // private

public:
    void setValue(int value)
    { // method=function
        // the value passed in value will alter the value of data
        data = value;
    }
    friend void add(A, B); // this loc specifies that the signature of method is a friend of this class
    // this loc says, "see class A this method outside of you is a friend of yours thus please allow your private data to bve used by them."
    // it is like giving special permission to some method outside of the class to access its private members
};

class B // since i have made a new class, even if its all methods and variables are same as the class A, it will be occupying new space in RAM and hence these things will be local to class B only

{
    int data; // this is private

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(A, B);
};

void add(A obj1, B obj2) // method=function  object1 is A type i.e. it corresponds to class A
{
    cout << "Adding object values of A and B is " << obj1.data + obj2.data << endl; // here data is not accesible as it is private
}
// if any method or function is trying to access any private member of a class then make sure that it is friend of that class.

int main()
{
    A a1;
    // a1 is object of A
    a1.setValue(10);
    // accessing the setValue using a1 and pass the value for variable value
    // by the help of a1 object, setValue method is called and the value passed in value sets the value and then the data is set equal to value

    B b1;
    b1.setValue(20);

    add(a1, b1); // it is asking for object which is a1 provided
}
