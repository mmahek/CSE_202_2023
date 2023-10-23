#include <iostream>
using namespace std;

// Template allows us to write generic programs - bluprint and use it further
// Can be implemented in two ways - 1. Function Templates 2. Class Templates

/*
1.1 Class Template
    Declaration

    template <class T> T is a representation of generic varablethis clas will be generic and 
    class className{
            T var;

            T print(){//this function will be defined at the time of defining the by the user

            }
    };

1.2 Defining class members outside class template
    template <class T>
    class className{
        T var;

        T print();
    };  

    // T is returnType
    template <class T>
    T className<T> :: print(){// :: <-- scope resolution

    }
*/
template <class T>//T is generic variable
class Number{
    T num;

    public:
    Number(T n){
        num = n;
    }
    T getNum(){
        return num;
    };//get method of returning
};

// template <class T>
// T Number<T> :: getNum(){
//     return num;
// }

int main(){
    /* Number n1(2);

     cout << n1.getum();*/

    //className<datatype> obj(parameter);
    Number<int> n1(2);
    Number<float> n2(2.2);
    Number<double> n3(7.77);

    cout << "int  : " << n1.getNum();
    cout << "\nfloat  : " << n2.getNum();
    cout << "\ndouble  : " << n3.getNum();
}