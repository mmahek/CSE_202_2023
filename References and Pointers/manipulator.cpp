#include<iostream>
#include<iomanip>
using namespace std;

//Manipulators
//these are special functions that are used to change certain charactersticks of i/o and o/p
//eg: endl, \n, 
int main(){ 
    int a = 123;

    cout << setfill('*') << setw(15) << a << endl;
    return 0;
}