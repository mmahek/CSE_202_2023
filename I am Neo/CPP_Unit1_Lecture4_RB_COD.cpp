// #include <iostream>
// using namespace std;
// enum Month { January = 1, February = 2, March = 3 , April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };
// class Year{
//     int n;
//     public : 
//     void inputMonth(){
//         cin >> n;
//     }
//     void outputMonth(){
//         if(n > 12 || n < 1){
//             cout << "Invalid month input";
//         }
//         else{
//             switch (n)
//             {
//             case January::
//                 /* code */
//                 break;
            
//             default:
//                 break;
//             } ;
//         }
//     }
// };
// int main(){
//     Year y;
    
//     y.inputMonth();
//     y.outputMonth();
//     return 0;
// }
#include <iostream>
using namespace std;

enum Month
{
    January = 1,     February = 2,     March = 3,     April = 4,     May = 5,     June = 6,     July = 7,    August = 8,     September = 9,     October = 10,     November = 11,     December = 12
};

class Year
{
    int n;

public:
    void inputMonth()
    {
        cin >> n;
    }

    void outputMonth()
    {
        if (n < 1 || n > 12)
        {
            cout << "Invalid month input";
        }
        else
        {
            switch (n)
            {
            case January:
                cout << "Month: January";
                break;
            case February:
                cout << "Month: February";
                break;
            case March:
                cout << "Month: March";
                break;
            case April:
                cout << "Month: April";
                break;
            case May:
                cout << "Month: May";
                break;
            case June:
                cout << "Month: June";
                break;
            case July:
                cout << "Month: July";
                break;
            case August:
                cout << "Month: August";
                break;
            case September:
                cout << "Month: September";
                break;
            case October:
                cout << "Month: October";
                break;
            case November:
                cout << "Month: November";
                break;
            case December:
                cout << "Month: December";
                break;
            default:
                cout << "Invalid month input";
            }
        }
    }
};

int main()
{
    Year y;
    y.inputMonth();
    y.outputMonth();
    return 0;
}
