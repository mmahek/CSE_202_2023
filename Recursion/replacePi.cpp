#include <iostream>
using namespace std;
void replacePi(string s){
    //base case
    if(s.length() == 0){
        return;
    }
    if( s[0] == 'p' && s[1] == 'i'){
        cout <<"3.14";
        replacePi( s.substr(2) );//calling the function itself i.e. RECURRSION
    }
    else{
        cout << s[0];
        replacePi( s.substr(1) );
    }
}

int main(){
    replacePi("pippixpwerpi");
    
    return 0;
}