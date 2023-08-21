#include<iostream>
using namespace std;

//reference variable: when a variable is pointing to same memory address 
//it is a reference to an existing variable
//i am known by my name in college, at home i am known by my nickname. thus nickname is a reference variable
int main(){

    // string name ="Hello";
    // string &ref = name;
    // //both name and ref are pointing to same memory address

    // cout << name << endl;
    // cout << ref << endl;
    int a = 5;
    int &b = a;
    cout << a<< endl;
    a++;
    cout << b<<endl;
    b++;
    cout << a << endl;
    //everytime, the increment is taking place on same memory address thus be it a or b, the value is incremented
    return 0;
    }