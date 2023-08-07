#include <iostream>
using namespace std;
int globalVar = 10;

void myFunc()
{
    cout << "Hello." << endl;
    int localVar = 20 ;
}

void myFunc1(){
    myfunc();
    cout << globalVar << endl ;
    // cout << localVar << endl;
}

int main()
{
    myFunc1();
    return 0;
}