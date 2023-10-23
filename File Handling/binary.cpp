#include<iostream>
#include<fstream>
using namespace std;


int main(){
    //ofstream file("test.bin", ios::binary);
    // int p = 1234;
    // int q = 5678;
    // file.write((char *)&p, sizeof(p)); //&p points to first element of p and treat it as stream of characters, second parameter is size of p
    // file.write((char *)&q, sizeof(q));

    ifstream file("test.bin", ios::binary);
    int p;
    cout << "Value of p : " << p << endl;// prints garbage value


    file.read((char*) &p, sizeof(p));
    cout << "Value of p : " << p << endl;

    
    file.close();
    return 0;
}