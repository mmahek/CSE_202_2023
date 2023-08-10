#include <iostream>
using namespace std;

//forward declaration
class B;

class A
{
    int data; // private data member by default

public:
    void setValue(int value)
    {                 // method
        data = value; // data is private to this class
    }
    friend void add(A, B); // this is like giving some special permission for accessing
};

class B{
    int data;

    public:
    void setValue(int value){
        data = value;
    }
    friend void add(A, B)
};
void add(A obj1, B obj2){

}
//method to print the data
void add(A obj1, B obj2) // this function is trying to access private data member of class A, to do this this function must be freind of the class.
//
{
    cout << "Adding object values of A and B: " << obj1.data + obj2.data << endl;
}
int main()
{
    A a1;
    a1.setValue(10);

    B b1;
    b1.setValue(11);
    add(a1,b1);
    return 0;

    
}