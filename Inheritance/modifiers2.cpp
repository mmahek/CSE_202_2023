#include <iostream>
using namespace std;

class Base
{
private:
    int private1 = 1;

protected:
    int protected1 = 2;

public:
    int public1 = 3;
    int getPrivateValue()
    {
        return private1;
    }
};

class ProtectedDerived : protected Base{
    public:
    int getProtectedValue(){
        return protected1;
    }
    int getPublicValue(){
        return public1;
    }
};

class PublicDerived : public Base
{
public:
    int getProtectedValue()
    {
        return protected1;
    }
};
int main()
{
    PublicDerived obj1;
    Base b1;
    cout << "Public : " << b1.public1 << endl;//obj1.public1 will work as well
    // cout << "Public : " << obj1.public1 << endl;

    // cout << "Pribvate : " << obj1.getPrivateValue() << endl;

    // cout << "Protected : " << obj1.getProtectedValue() << endl;
    return 0;
}