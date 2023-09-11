#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string input;
    ofstream oup;
    oup.open("file1.txt");
    cout << "ENter the text: " ;
    cin >> input;
    oup << input ;
    oup.close();

    ifstream inp;
    string in;
    while (getline(inp, in)){
        cout << in << endl;
    }
    inp.close();
    return 0;
}