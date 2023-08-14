// //Define a class Rectangle with private attributes length and width.Create a friend function named calculateArea that calculates the area of the rectangle.
// #include <iostream>
// using namespace std;
// class Rectangle{
//     int length;
//     int width;

//     public:
//     void set(int n1, int n2){
//         length = n1;
//         width = n2;
//     }
//     void print()
//     {
//         cout << "Area of Rectangle is :" << length*width ;
//     }

//     friend Rectangle calculateArea(Rectangle, Rectangle);


// };

// Rectangle calculateArea( Rectangle obj1)
// {
//     Rectangle area;
//     area.set(obj1.length , obj1.width);
//     return area;
// };
// int main(){
//     Rectangle r1, a;
//     r1.set(5, 2);

//     a = calculateArea(r1);
//     a.print();
//     return 0;
// }
#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    void set(int n1, int n2)
    {
        length = n1;
        width = n2;
    }

    void print()
    {
        cout << "Area of Rectangle is: " << length * width << endl;
    }

    friend Rectangle calculateArea(const Rectangle &);
};

// Rectangle calculateArea(const Rectangle &obj1)
// {
//     Rectangle area;
//     area.set(obj1.length, obj1.width);
//     return area;
// }
Rectangle calculateArea(const Rectangle &obj1)
{
    Rectangle area;
    area.set(obj1.length, obj1.width);
    return area;
}

int main()
{
    Rectangle r1, a;
    r1.set(5, 2);
    a = calculateArea(r1);
    a.print();
    return 0;
}
