#include <iostream>
using namespace std;

// blueprint or template
// 1. it has two things: 1. Attributes and 2. Behavior
// Attributes:
// 2. It generally means a Features or properties i.e. something which is special and different about it.
// 3. Behavior means how it acts or interacts with other things and functions present beside / along with it.
// 4. for every classes, these two can be defined and when the classes are used i.e. objects come into existence, these things will remain same despite of the size and use. that is why it is called as blueprint i.e. litrally follow what ever is mentioned. it is template on which the user/objects just needs to use it for covinience and save time.
// 5.  here the user is objects i.e. real world entities which will use these classes and the task of programmer will be reduced drastically as she will not have to define attributes and behavior every time when a new object comes into existence.
// 6. now n- number of objects can use this class for their convinience and save time.

#include <iostream>
using namespace std;

class Building
{
    int door;
    string doorColor;
    int window;
    string windowColor;
    int elevator;

    void
    elevatorFunctioning()
    {
        // working of elevator
    }
};

// access modifiers :
// 1. public
// 2. private
// 3. protector(Inheritance)
int main()
{
    Building b1;
    b1.door;
    b1.window;
}