#include <iostream>
using namespace std;
//Function Overloading
// Multiple Functions with same name, will work differently if given different parameters

int add(int a, int b)
{ // a and b here are local to this function
    // these a and b are occupying memmory different than the below a and b
    return a + b;
}
float add(float a, float b)
{ // similar to above, a and b here are local to this function only
    return a + b;
}
int add(int a, int b, int c)// here the number of parameters are three and this function will be into action when the user passes 3 arguments only.
{
    return a + b + c;
}
int main()
{
    int x = add(2, 5); // this called function directs to the functions which has same parameter and argument types i.e. int
    float y = add(2.8f, 4.6f);
    int z = add(2,4,6);
    // cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}