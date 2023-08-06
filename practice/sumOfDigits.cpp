#include <iostream>
using namespace std;
int main()
{
    int inputNum;
    int sum = 0;
    cout << "Enter the Number : ";
    cin >> inputNum ;
    int reversedNum = 0;
    int rem ;
    while (inputNum!=0)
    {
        rem =inputNum%10;
        reversedNum = reversedNum*10 +rem;
        inputNum=inputNum/10;
        sum+=rem;
    }
    cout << "The Given Number is : " << inputNum << endl ;
    cout << "The reversed number is : " << reversedNum<< endl;
    cout << "The sum of digits of Input number is : " << sum << endl;
}