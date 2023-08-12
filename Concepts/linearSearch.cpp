#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i; i < size; i++) // while(i<size){ }
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {33, 21, 10, 17, 72, 88, 11, 1, 8, 99};
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if (found == 1)
    {
        cout << "key found" << endl;
    }
    else
    {
        cout << "not  found" << endl;
    }
}
//Search the even number and odd numbers and print them seperatly
