#include<iostream>
using namespace std;

/*
    *Protected - 
    Like private members, protected members are inaccessible outside the class, however, they can be accesses by derived class, friend classes or methods(functions)
    
    we need protected members if we want to hide the data of a class, but still want that data to be inherited by its derived class.
*/

class Animal{
    private:
    string color;
    protected:
    string type;

    public:
    void eat(){
        cout << "I can eat" << endl;
    }

    void sleep(){
        cout << "I can sleep" << endl;
    }
    void setColor(string color){//setter
        color = clr;
    }
    string getColor(){//getter
        return color;
    }
};

class Dog : public Animal{
public: 
    void setType(string tp){
        type = tp;//will be able to access type because this class is inheriting the class animal
    }
    void display(){
        cout << "I am a " << type << endl;
    }
    void bark(){
        cout << "I woof" << endl;
    }
};

int main(){
    Dog d1;

    d1.eat();
    d1.sleep();
    d1.bark();
    d1.setType("mammal");

    d1.display();
    return 0;
}