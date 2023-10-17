#include <iostream>
using namespace std;

// abstract lass refers to a class containing atleast one pure virtual functions, which can not be instantiated

/* CharacterStics -
    -1. Abstract class must have at least one pure virtual function

    -2. Abstract classes cannot be instantiated, but pointer and references of abstract class types can be created. We cannot create object of an abstract class. 
    
    -3. Classes that inherits the abstarct class must implement all pure functions.
*/

/*class Shape{
    public:
    int shape_width;
    int shape_height;

    void width(int w){
        shape_width = w;
    }

    void height(int h){
        shape_height = h;
    }

    int periMeterOfSqure(int side){
        return 4 * side;
    }

    int periMeterOfRectangle(int l, int b){
        return 2 * (l + b);
    }

    //All the functions of squre and rectangle are clubbed in a single class
};
*/

class Shape{
public:
    int shape_width;
    int shape_height;

    void width(int w)
    {
        shape_width = w;
    }
    void height(int h)
    {
        shape_height = h;
    }
    virtual int periMeter() = 0;
};

class Rectangle : public Shape{
public:
    int periMeter()
    {
        return 2 * (shape_height + shape_width);
    }
};

class Square : public Shape{
public:
    int periMeter()
    {
        return 4 * (shape_height);
    }
};

int main()
{
    Rectangle r1;
    Square s1;

    r1.width(10);
    r1.height(5);

    s1.height(12);

    cout << "Perimeter of rectangle = " << r1.periMeter();
    cout << "\nPerimeter of Square = " << s1.periMeter();

    return 0;
}