#include <iostream>
using namespace std;

//operator overloading : we canoverload an operator as long as we are operating on user defined types like objects and structures

//It's a COMPILE TIME POLYMORPHISM

class Count{
    int value;

    public:
    Count(){
        value = 10;//whenever an object of this count class is made, it is initialized by 0
    } 
    void operator ++(){
        value = value + 14;
    }
    void display(){
        cout << "Count: " << value << endl;
    }
};
int main(){
    Count c1;
  
    // ++c1;//preincremented
    // c1.display();

// this is normal incrementation
    // int x = 20;
    // ++x;
    // cout << x;
    return 0;
}
// we canot use operator overloading for basic types such as int, double.. etc.
