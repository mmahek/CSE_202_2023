#include <iostream>
using namespace std;

// blueprint or template
// 1. it has two things: 1. Attributes and 2. Behavior
// 2. Attributes: generally means a Features or properties i.e. something which is special and different about it.
//when talking about attributes in context of classes, it means that the number of variables. for example: in a building , windows, doors, elevators
// 3. Behavior : means how it acts or interacts with other things and functions present beside / along with it.
// 4. for every classes, these two can be defined and when the classes are used i.e. objects come into existence, these things will remain same despite of the size and use. that is why it is called as blueprint i.e. litrally follow what ever is mentioned. it is template on which the user/objects just needs to use it for covinience and save time.
// 5.  here the user is objects i.e. real world entities which will use these classes and the task of programmer will be reduced drastically as she will not have to define attributes and behavior every time when a new object comes into existence.
// 6. now n number of objects can use this class for their convinience and save time.
// 7. objects are derived from classes


class Building
{
    //Attributes of class Building
    public:
    int door;
    string doorColor;

    private:
    int window;
    string windowColor;
    int elevator;

    void elevatorFunctioning()//Behavior of class Building
    {
        // working of elevator
    }
};
//the thing which differenitiates classes from structures is 
//access modifiers provides a security to objects of classes
// access modifiers :
// 1. public
// 2. private: by default things are private
// 3. protector(Inheritance)
int main()
{
    Building b1;
    b1.door;
    b1.window;
}