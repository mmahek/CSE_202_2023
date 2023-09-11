#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // ofstream onFile;// accepts inputs
    ifstream inFile; // give output i.e. retrieve data
    string str;

    // onFile.open("file1.txt");
    // //onFile.open("C:\\Users\\dell\\Desktop\\test.txt"); //creates file at the given location
    inFile.open("file1.txt");

    // for writing data into file
    // onFile << "Printed on file."; // this is written in file

    // for reading from file
    //  inFile >> str;
    //  cout << str;
    //  this thing will not work as it has space and when this encounters that space it reads null character and assumes string to have ended

    while (getline(inFile, str))
    { // this will print everything
        cout << str << endl;
    }

    cout << "File1 has been created successfully." << endl; // printing the success message on console, nothing is done on the file.
    // onFile.close();
    inFile.close();
    return 0;
}