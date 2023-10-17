#include<iostream>
using namespace std;
class Number{
    int n;
    public:

    //constructor
    Number(int n){
        this->n = n;
    }

    void print(){
        cout << n;
    }
    operator int(){// no return type no parameters
        return n;
    }
};
int main(){
    // float x = 2.345;
    // int y;
    // y = x;
    Number num = 10;
    //num.print();
    int a = num; //-> gives error
    cout << a;//outputs 10 from object
    //-----------------------------------

    //1. Base to class type conversion
    /*
    When we create object using the variables of primary data type then it is called as basic to class type conversion. Genearlly we use single argument constructor to perform type conversion frm basic to class type. */

//------------------------------------

    //2. Class type to Basic type
    /*When we assign an object to a primitive data type variablr , it is known as class type to basic conversion. To perform this type of conversion we have to define the casting operator function.

    This casting operator function must be a member of the class.
    This function cannot have any return datatype.
    This function cannot take any parameter.
    operator datatype(){        
    }
    */
//------------------------------------
    //3. one class type to other class type
    /*
    When we assign an object of a class into the object of another class then it is called class to class conversion.
    This can be performed either by defining casting operator function in source class or using constructor in the */

    return 0;
} 