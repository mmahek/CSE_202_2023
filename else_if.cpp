#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number obtained by student: ";
    cin >> num;
    if (num < 0 || num > 100)
    {
        cout << "Invalid Input " << endl;
    }
    else if (num <= 100 && num > 90) // checks 91 to 100
    {
        cout << "Student has obtained an A" << endl;
    }
    else if (num <= 90 && num > 80)
    {
        cout << "Student has obtained a B" << endl;
    }
    else if (num <= 80 && num > 70)
    {
        cout << "Student has obtained a C  " << endl;
    }
    else if (num <= 70 && num > 60)
    {
        cout << "Student has obtained a D" << endl;
    }
    else if (num <= 60 && num > 50)
    {
        cout << "Student has obtained an E" << endl;
    }
    else
    {
        cout << "Student has failed the course" << endl;
    }
    return 0;
}