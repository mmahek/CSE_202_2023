#include <iostream>
using namespace std;
int main(){
    int arr[10] = {23, 122, 41, 67};//array a has been initialized with 4 elements only and other 6 elements will be initialized with garbage value 
    cout << "1 - " << arr << endl;//this points to the address of array , first value of array as well
    cout << "2 - " << arr[0] << endl;//this points to the first element or element at 0th index of array
    cout << "3 - " << &arr[0] << endl;//this points to the address of first element's address i.e. address of array, where it starts
    cout << "4 - " << *arr << endl;//dereferencing the value of array, the
    cout << "5 - " << *arr+1 << endl;//prints 24 as arr pointer points to the first element of array and it is incremented by 1 thus 23 +1 = 24
    cout << "6 - " << *(arr + 2) << endl;// this points to the second element of array
    cout << "7 - " << *(arr) + 1 << endl;//prints 24
    cout << "8 - " << arr[2] << endl;//points to the second element of array
    cout << "9 - " << *(arr+2) << endl;//points to the element at second index of array, deferencing
    return 0;
}