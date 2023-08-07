#include<iostream>
using namespace std;
int product(int num1, int num2){
    
    return num1*num2;
    
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << "The product of numbers is : " << product(n1, n2);    
}