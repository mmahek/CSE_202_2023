#include <iostream>
using namespace std;

int max(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else if (num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int min(int num1, int num2, int num3)
{
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else if (num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Num1: ";
    cin >> n1;
    cout << "Num2: ";
    cin >> n2;
    cout << "Num3: ";
    cin >> n3;

    cout << "The greatest number is : " << max(n1, n2, n3) << " and least is : " << min(n1, n2, n3);
}