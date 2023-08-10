#include<iostream>
using namespace std;
int main(){
    char ch;
    short numShort;
    int numInt;
    long numLong;
    long long num2Long;
    float numFloat;
    double numDouble;
    long double numLongDouble;
    bool numBool;


    cout << "\n\n Size of Fundamental Datatypes" << endl;
    cout << "The size of character datatype is : " << sizeof(ch) << " bit." << endl;
    cout << "The size of short datatype is :     " << sizeof(short) << " bits." << endl;
    cout << "The size of int datatype is :       " << sizeof(int) << " bits." << endl;
    cout << "The size of long datatype is :      " << sizeof(long) << " bits." << endl;
    cout << "The size of long long datatype is : " << sizeof(long long) << " bits." << endl;
    cout << "The size of float datatype is :     " << sizeof(float) <<" bits." << endl;
    cout << "The size of double datatype is  :   " << sizeof(double) << " bits." << endl;
    cout << "The size of long double is :        " << sizeof(long double) << " bits. " << endl;
    cout << "The size of bool datatype is  :     " << sizeof(bool) << " bit." << endl;
}