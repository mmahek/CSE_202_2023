#include <iostream>
using namespace std;

/*
    Multi-level Inheritence
    When one class inherits class which further inherited by another class
*/
class Animal{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
    void sleep()
    {
        cout << "Animal can sleep." << endl;
    }
};

class Dog : public Animal{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

class Puppy : public Dog{
public:
void woof(){
    cout << "Puppy woofs." << endl;
}
};

int main(){
    Puppy p1;
    p1.eat();
return 0;
}