#include <iostream>
using namespace std;
int main()
{
    int numOne;
    cout << "Enter the Number: " ;
    cin >> numOne;
    if (numOne >= 0)
    {
        cout << "Number is Positive : " << numOne << endl;
    }
    else
    {
        cout << "Number is Negative : " << numOne << endl;
    }
    return 0;
}