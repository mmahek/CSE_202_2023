#include<iostream>
using namespace std;

// return type of functions define the type of value we are expecting from it. 
// 1.void type: it does not return anything . if called it will not return anything.
 


//declaration/creating of function ( equivalent to specifing what the fuction will do)
void myFunc()// curly braces is called the scope of function thus whenever called it will execute those statements
 
{

    // defining a function
    cout<< "1" <<endl;
    
    cout << "This is a void function"<< endl;
}
void myFunc1(){
    cout << "2" << endl;
    myFunc();
}

//excecution of program starts from main fuction

int main(){
    //calling of the function
    myFunc1();
    cout << "3" << endl;
}
// the compiler first of all goes to main function and see the calling of myFunc1 which leads it to print 2 and then it encounters the calling of myFunc and prints 1

//calling of the function requires the called function to exist / be declared before its calling