#include <iostream>
using namespace std;

// Polymorphism : poly = many, Morph = forms
// Mahek behaves differently when present at different places, student, friends, ghar ka baccha.
// Polymorphism : same entity(function or operator) behaves differently in different scenerios
// Function overloading : in function overloading, we can use two functions having same name if they have different parameters

// It is a COMPILE TIME POLYMORPHISM because the compiler knows which function to execute before the program is compiled
int sum(int num1, int num2){
    return num1+num2;
}

double sum(double num1, double num2){
    return num1+num2;
}

int sum(int num1, int num2, int num3){
    return num1+num2+num3;
}

int main()
{
    // int a = 5;
    // int b = 10;

    // int c = a + b;
    // cout << c << endl;

    // string x = "Mahek";
    // string y = "Sandeep";

    // string z = x + y;
    // cout << z;

    cout << sum(1,2,3);//signature matches the third sum function
    return 0;
}

//----------------------------------------------