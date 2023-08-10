#include<iostream>
using namespacestd;

class Room{
    int lenght;
    int breadth;
    int height;

    int calculateArea(){
        return lenght * breadth;
    }
    int calculateVolume(){
        return lenght * breadth * height;
    }
};
int main(){
    Room room1;

}
//diiference between structures and classes