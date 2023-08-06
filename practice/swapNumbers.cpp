#include<iostream>
using namespace std;


int main(){
    int num1, num2;
    cout << "\n\n\nSwap two numbers without using third variable\n\n\n\n";
    cout << "Enter the two numbers to be swapped : " ;
    cin >> num1 >> num2 ;
    cout << endl;
    cout << "Num1 : " << num1 << endl << "Num2 : " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Now Num1 is : " << num1 << endl;
    cout << "Now Num2 is : " << num2 << endl;
}