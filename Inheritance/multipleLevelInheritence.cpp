#include<iostream>
using namespace std;
/*
    Multiple Inheritence - when one child class inherits two or more classes
*/
class A{
    public:
    int a;
    void geta(int n){
        a = n;
    }

};

class B{
    public:
    // int b;
    // void getb(int n){
    //     b = n;
    // }
    void display(){
        cout << "Class B" <<endl;
    }
};

class C : public A, public B{
    public:
    void display(){
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
        cout << "Sum of a and b is " << a+b << endl;
    }
    // void print(){
    //     A::display();
    // }    This is scope resolution : tell the compiler that it is what we are refering to, this class
};
int main(){
    C c1;
    // c1.geta(12);
    // c1.getb(2);

    c1.display();
    return 0;
}