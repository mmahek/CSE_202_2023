#include <iostream>
using namespace std;
//arithemetic operators
// +  -  *  /  %

//assignment operator
// =

//Comparison Operators
// == (EQUAL TO) :: 
// != (NOT EQUAL TO) :: 
// > (GREATER THAN) :: 
// < (LESS THAN) :: 
// => (GREATER THAN EQUAL TO) :: 
// <= (LESS THAN EQUAL TO)

//Logical oparators
// &&(AND GATE){BOTH CONDITIONS MUST BE TRUE} :: ||(OR GATE) {EITHER OF THE CONDITIONS CAN BE TRUE THEN ITS OKAY}

int main()
{
    int numOne;
    cout<<"Enter the Number one : ";
     cin >> numOne;
     cout << "The number One is : "<< numOne << endl;
    int numTwo;
    cout << "Enter the Number two : ";
    cin >> numTwo;
    cout << "The number Two is : " << numTwo <<endl;

    int sum;
    sum=numOne+numTwo;
    cout << "The sum of two  umber is :" << sum<< endl;

    int dif;
    dif=numOne-numTwo;
    cout <<"The difference of two numbers is :" << dif << endl;
    int mul;
    mul = numOne*numTwo;
    cout << "The multiplication of two numbers is :" << mul << endl;

    int div;
    div = numOne/numTwo;
    cout << "The quotient of two numbers is :" << div << endl;

    int mod;
    mod = numOne % numTwo;
    cout << "The modulus of two numbers is :" << mod << endl;

    return 0;
}