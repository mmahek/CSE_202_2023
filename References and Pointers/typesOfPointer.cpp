#include <iostream>
using namespace  std;



int main(){

    // 1. Null Pointer :: A null pointer is a pointer which points to nothing, if we donot have the address to be assigned to a pointer , we can use NULL
    // int *p; //contains garbage value
    // int *p = NULL; 
    // cout << p;

    // 2. Double pointers - we can create a pointer that in turn ay point to data or another pointer - pointer points towards another pointer.

    // int  a= 5;
    // int *p = &a;
    // int **q = &p;

    // //not dereferencing
    // cout << p << endl;
    // cout << q << endl;
    // cout << &p << endl;//gives address of p


    // 3. Void Pointers :: It is a Generic pointer, it has no assciated type with it ,can hold address of any type, later on it can be typecasted

    // void pointers cannot be dereferenced, it can be done using the void pointer

    // double i = 5;   
    // void *ptr = &i;

    // 4. Wild pointer - when a pointer is declared but not initialized, they point at a random memory location : (AWAARA)

    // int a = 5;
    // int *p;
    //  cout << *p << endl;
    

    //5. Dangling Pointers :: A pointer pointing towards a memory location that has been deleted
}
