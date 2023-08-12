#include <iostream>
#include <climits> //<limits.h>
using namespace std;

// return type is int
int getMin(int num[], int size)
{ // pass the array and its size as parameters
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{

    int size;
    cout << "Enter the value of size : ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the values : ";
        cin >> arr[i];
    }
    cout << "Minimum is : " << getMin(arr, size) << endl;
    cout << "Maximum is : " << getMax(arr, size);
}