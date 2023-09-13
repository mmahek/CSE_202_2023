#include <iostream>
using namespace std;
/*
    **Unary Operators:
    - operators that work on single operand
    - eg: ++, --, !

    **Binary Operators:
    - operators which work on two operands
    eg: +, - , * , / , %
*/

class UnaryOverload{
    int hr, min;

    public:
    void input(){
        cout << "Enter the time: " ;
        cout << endl;
        cin >> hr;
        
        cin >> min;
    }    
    void operator ++(int){
        hr++;
        min++;
    }

    void operator --(int){
        hr--;
        min--;
    }
    
    void output(){
        cout << "Time is " << hr << ":" << min;
    }
};
int main(){
    UnaryOverload obj;
    obj.input();
    obj++;
    cout << "After increment : " << endl;
    obj.output();

    obj--;
    cout << "\nAfter decrement : " << endl;
    obj.output();
    return 0;
}