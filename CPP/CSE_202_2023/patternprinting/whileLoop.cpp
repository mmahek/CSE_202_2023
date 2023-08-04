#include<iostream>
using namespace std;
int main(){
    //while(condition){
    //      execute
    //}
    int i = 1;
    while (i <= 5){
        int j =1;
        while(j <= 5){
            cout << i << " " << j << endl;
            j++;
        }
        i++;
    }
}