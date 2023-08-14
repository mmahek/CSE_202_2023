#include <iostream>
using namespace std;
class Complex;
class Calculator
{
    public:
    int sumReal(Complex obj1, Complex obj2);
    int sumImaginary(Complex obj1, Complex obj2);
};

class Complex
{
    int a, b; // private

public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void print()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }

    // friend int Calculator :: sumImaginary(Complex obj1, Complex obj2);
    // friend int Calculator :: sumReal(Complex , Complex ); //(scope resolution operator  ::   )

    //making whole class a friend
    friend class Calculator;
};
// scope resolution operator is used to access the method of another class via another class
// whenever a method id accessed, it is through its class, using scope resolution
int Calculator :: sumReal(Complex obj1, Complex obj2)
{
    return obj1.a + obj2.a;
}
int Calculator :: sumImaginary(Complex obj1, Complex obj2)
{
    return obj1.b + obj2.b;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(2, 3);

    Calculator calc;
    int ans = calc.sumReal(o1, o2);
    cout << "Real sum is : " << ans << endl;

    int ans2 = calc.sumImaginary(o1, o2);
    cout << "Imaginary sum is : " << ans2 << endl;
}
