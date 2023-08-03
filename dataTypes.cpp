#include <iostream>
#include<string.h>
using namespace std;
int main()
{

// camel casing =  first word will have  all small letter and then all other words will have capital first letter


    //int takes 4 bytes space on 64 bit and 2 bytes on 32 bit processor
    int myInteger  ; //this throws the garbage value    
    cout << myInteger << endl;

    int myInteger2 = 5; // this gives the value which is assigned to the variable y
    myInteger2 = 24; //overwritten data
    cout << myInteger2 << endl;
    

    double myDouble = 4.7; //it takes 8 bytes of space
    cout << myDouble << endl;

    float myFloat = 4.8; //it takes 4 bytes of space
    cout << myFloat << endl;

    char myChar = 'a'; //it takes 1 byte of space
    cout << myChar << endl;

    string myString = "Smash"; // it takes (1byte * number of characters)
    cout << myString << endl;

    bool myBool = false;// it takes 1 byte of space false ==0 and true ==1 
    cout << myBool << endl;



    int userInput;
    cout << "Enter the number : ";
    cin >> userInput ;
    cout << "the number is  : " << userInput << endl;


    string name; 
    //when a 'space' or 'enter' is typed into input then the compiler inserts a null character and it does not read the next words thus it does not prints the rest words

    cout << "Enter the name : ";
    //cin >> name;
    getline(cin, name);
    // this removes the error of cin
    cout << "the name is  : " << name << endl;

    return 0;
}
//no two variables can have same name i.e. identifier
//variables can be overwritten
// to not overwrite variables, use the const keyword before the variable

