#include <iostream>
using namespace std;

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
    friend Complex sumComplex(Complex, Complex); // making variables of class COmplex accessible to sumComplex so that is can use them. But it still cannot print those.
};

Complex sumComplex(Complex obj1, Complex obj2) // method to store sumComplex in an object of Class complex because is has access to its variables but it cannot print its value.
{
    Complex result;
    result.setNumber((obj1.a + obj2.a), (obj1.b + obj2.b));
    return result;
};

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 2); //   .setNumber is a method inside the class
    c1.print();         //   .print is a method inside the class

    c2.setNumber(2, 3);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();
    return 0;
}
// Properties of Friend Function
//  1. Grants access to private and protected members
//  2. Friend function cannot be called by object of Complex Class
//  3. Cannot access members directly by their name, it would need object_name.member_name to access any number
//  4. can declared in private and public section of the class
