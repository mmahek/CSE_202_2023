#include<iostream>
using namespace std;

template <class T>
class addition{
    T num1;
    T num2;

    public:
    addition(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    T printResult(){
        cout << "\nAddition : ";
        return num1 + num2;
    };
};

//Subtraction
template <class T>
class subtraction{
    T num1;
    T num2;

    public:
    subtraction(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    T printResult(){
        cout << "\nSubtraction : ";
        return num1 - num2;
    };
};

//Multiplication
template <class T>
class multiplication
{
    T num1;
    T num2;

public:
    multiplication(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T printResult()
    {
        cout << "\nMultiplication : ";
        return num1 * num2;
    };
};

//Division
template <class T>
class division
{
    T num1;
    T num2;

public:
    division(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T printResult()
    {
        cout << "\nDivision : ";
        return num1 / num2;
    };
};
int main(){

    addition<char> a1('PavBhaji', 'Momos');
    subtraction<float> s1(10.258, 74.2541);
    multiplication<float> m1(12.34, 56.78);
    division<double> d1(24.0403, 04.0408);


    
    cout << a1.printResult();
    cout << s1.printResult();
    cout << m1.printResult();
    cout << d1.printResult();
    return 0;
}