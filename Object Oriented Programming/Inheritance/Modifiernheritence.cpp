#include<iostream>
using namespace std;
/*
    *Public Inheritence - It makes the Public members of the  base class public in derived class, and protected members of base class will remain protected in derived class.

    *Protected Inheritence - It makes the Public and Protected members of base class Protected in derived class.

    *Private Inheritence - It makes the Public and Protected members of base class Private in derived class.

    *Private members of the base class are inaccessible to thederived class.

*/

class Base{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class ProtectedDerived{
    // x is protected
    // y is protected
    // z is not accessible
};

class PrivateDerived{
    // x is private
    // y is private
    // z is not accessible
};

class PublicDerived{
    // x is public
    // y is protected
    // z will not be accessible
};
int main(){
    return 0;
}