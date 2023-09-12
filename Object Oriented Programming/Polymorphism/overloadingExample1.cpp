#include <iostream>
using namespace std;
class Fraction{
    int a;  
    int b;

    public:
    Fraction(){
        a = 0 ;
        b = 0; 
    }
    void input(){
        cout << "Enter the numerator: " <<  endl;
        cin >> a;
        cout << "Enter the denominator : " << endl;
        cin >> b;
    }

    Fraction operator *(Fraction &obj){
        Fraction temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
        return temp;
    }
    void output(){
        cout << "The fraction is : " << a << " / " << b; 
    }
};
int main(){
    Fraction f1,f2, result;
    cout << "Enter the first fraction " << endl ;
    f1.input();
    cout << "\nEnter the second fraction " << endl ;
    f2.input();

    result = f1 *f2;
    result.output();
    return 0;
}