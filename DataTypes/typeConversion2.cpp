#include <iostream>
using namespace std;
// 3. one class type to other class type
/*
When we assign an object of a class into the object of another class then it is called class to class conversion.
This can be performed either by defining casting operator function in source class or using constructor in the */

//forward declaration
class Rectangle
{
    int width;
    int length;
    int area;

public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
        area = width * length;
    }

    void print()
    {
        cout << "Width : " << width << "\nLength : " << length << "\nArea : " << area << endl;
    }

    // intermidiate method for typecasting
    
};
class Triangle{
    int base, height;
    float area;

    public:
    Triangle(int b, int h){
        base  = b;
        height = h;
        area = 0.5 * height * base;
    }

    void print(){
        cout << "Base : "  << base << "\nHeight : " << height << "\nArea : " << area << endl;
    }
    operator Rectangle()
    {
        Rectangle temp(base, height);
        return temp;
    }
};


int main()
{
    Triangle t(10, 20);
    Rectangle r = t;
    return 0;
}