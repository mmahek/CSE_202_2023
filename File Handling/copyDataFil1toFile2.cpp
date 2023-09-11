#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // copy the data of on file to other file
    ifstream inFile;
    ofstream onFile;

    char ch;

    inFile.open("file1.txt");
    onFile.open("newfile.txt");

    while (inFile.get(ch))
    {
        // go thorugh the whole file and store what ever encountered in ch
        onFile.put(ch);
    }

    inFile.close();
    onFile.close();
    return 0;
}