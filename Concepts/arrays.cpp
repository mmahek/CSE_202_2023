#include <iostream>
using namespace std;

// Array stores multiple values of same datatype in a single variable
// Arrays stores multiple values of same types of elements that have contigous memory location in a single variable

int main()
{

    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " number";
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "The numbers are : ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "THe sum is :" << sum << endl;
    cout << "The average of the numbers is :" << sum / 5 << endl;
}

//  int arr[100], sum = 0;

// for(int i ; i < 5 ; i++)
// {
//     cout << "Enter " << i+1 << " NUmber"<< endl;
//     cin >> arr[i];
//     sum +=i;
// }
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }
// }