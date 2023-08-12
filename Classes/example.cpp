#include <iostream>
using namespace std;

class Room
{
    // attributes of class Room
public: // if not declared public, the objects takes it as private and cannot access the attributes, security benefits
    int lenght;
    int breadth;
    int height;

    // behaviour of class Room
    int calculateArea()
    {
        return lenght * breadth;
    }
    int calculateVolume()
    {
        return lenght * breadth * height;
    }
};
int main()
{
    Room room1; // room1 is the object of class Room

    room1.lenght = 10;
    room1.breadth = 10;
    room1.height = 5;

    cout << "The volume of room 1 is  : " << room1.calculateVolume() << endl;
    cout << "The area of room1 is : " << room1.calculateArea();
}
// diiference between structures and classes