#include<iostream>
using namespace std;

/*
1. A function is used to reduce the code redundancy, as well as to save memory space when invoked, a bunch of tasks are performed (such as matching arguments : happening on internally, inside of compiler, we cannot se these).
2. But when function definition consits of hardly one or two statements then , this bunch of tasks appears to be time consuming, so to fix thiswe use the concept of INLINE functions. 
3. When a function is declared inline, the "Function's body is replicated at function calling space."

*/
inline int add(int a, int b){
    return a+b;
}
int main(){
    cout << "Sum: " << add(9,5);
    return 0;
};