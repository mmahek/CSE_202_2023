#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    int val = remove("file1.txt");//manage this by control statements
    if(val == 0){
        cout << "File Deleted" << endl;
    }
    else{
        cout << "File does not exists" << endl;
    }
    return 0;
}
