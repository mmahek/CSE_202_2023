#include <iostream>
using namespace std;
int main(){
    // int num =5;
    // int a = num ; 
    // cout << "num before: " << num << endl;
    // a++;
    // cout << "num after: " << num <<endl;
    // int *p = &num;//holds the refence of num,
    // cout << "Before: " << num << endl;
    // (*p)++;
    // cout << "After : " << num << endl;

    // int *q = p;
    // cout << p << " : " << q << endl; 
    // cout << *p << " : " << *q << endl;//copying one pointer value to other

    int i = 5;
    int *p = &i;

    cout << ++(*p) << endl;
    *p = *p + 1 ;//
    cout << *p << endl;
    cout << "Before : "<< p << endl;//address occupies 4 bytes in memory
    p =p +1;//memory is jumping by 4 blocks
    cout << "after: " << p << endl;
}