#include <iostream>
using namespace std;
/*
Single level Inheritence : One parent and one child
                               when one class inherits another class */
class Animal
{
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

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

int main()
{
    Dog d1;
    d1.eat();
}