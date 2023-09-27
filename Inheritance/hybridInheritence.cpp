#include<stdio.h>
using namespace std;
//Hybrid inheritence is a combination of more than one type of inheritence.
class A{

};

class B : public A{
    //single level inheritence

};

class C{

};

class D : public C, public B{
    //multiple level inheritence

};

int main(){
    return 0;
}