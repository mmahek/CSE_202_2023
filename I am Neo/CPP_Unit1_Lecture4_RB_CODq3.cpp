// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // struct Time{

// // // // // // // };

// // // // // // // void calcDifference( const Time& t1, const Time& t2, Time result){
// // // // // // //     cin >> t1;
// // // // // // //     cout << endl;

// // // // // // //     cin >> t2;
// // // // // // //     cout << endl;

// // // // // // //     result = t1 -t2;
// // // // // // //     cout << result;
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     calcDifference();
// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // struct Time
// // // // // // {
// // // // // //     int hours;
// // // // // //     int minutes;
// // // // // //     int seconds;

// // // // // //     Time operator-(const Time &other) const
// // // // // //     {
// // // // // //         Time diff;
// // // // // //         int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
// // // // // //         int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
// // // // // //         int difference = totalSeconds1 - totalSeconds2;

// // // // // //         diff.hours = difference / 3600;
// // // // // //         difference %= 3600;
// // // // // //         diff.minutes = difference / 60;
// // // // // //         diff.seconds = difference % 60;

// // // // // //         return diff;
// // // // // //     }

// // // // // //     friend istream &operator>>(istream &in, Time &t)
// // // // // //     {
// // // // // //         in >> t.hours >> t.minutes >> t.seconds;
// // // // // //         return in;
// // // // // //     }

// // // // // //     friend ostream &operator<<(ostream &out, const Time &t)
// // // // // //     {
// // // // // //         out << t.hours << "h " << t.minutes << "m " << t.seconds << "s";
// // // // // //         return out;
// // // // // //     }
// // // // // // };

// // // // // // void calcDifference()
// // // // // // {
// // // // // //     Time t1, t2, result;

// // // // // //     cout << "Enter time t1 (hours minutes seconds): ";
// // // // // //     cin >> t1;

// // // // // //     cout << "Enter time t2 (hours minutes seconds): ";
// // // // // //     cin >> t2;

// // // // // //     result = t1 - t2;
// // // // // //     cout << "Time difference: " << result << endl;
// // // // // // }

// // // // // // int main()
// // // // // // {
// // // // // //     calcDifference();
// // // // // //     return 0;
// // // // // // }
// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // struct Time
// // // // // {
// // // // //     int hours;
// // // // //     int minutes;
// // // // //     int seconds;
// // // // // };

// // // // // Time operator-(const Time &t1, const Time &t2)
// // // // // {
// // // // //     Time result;
// // // // //     int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
// // // // //     int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
// // // // //     int difference = totalSeconds1 - totalSeconds2;

// // // // //     result.hours = difference / 3600;
// // // // //     difference %= 3600;
// // // // //     result.minutes = difference / 60;
// // // // //     result.seconds = difference % 60;

// // // // //     return result;
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     Time t1, t2, result;

// // // // //     cout << "Enter time t1 (hours minutes seconds): ";
// // // // //     cin >> t1.hours >> t1.minutes >> t1.seconds;

// // // // //     cout << "Enter time t2 (hours minutes seconds): ";
// // // // //     cin >> t2.hours >> t2.minutes >> t2.seconds;

// // // // //     result = t1 - t2;
// // // // //     cout << "Time difference: " << result.hours << "h " << result.minutes << "m " << result.seconds << "s" << endl;

// // // // //     return 0;
// // // // // }
// // // // #include <iostream>
// // // // using namespace std;

// // // // struct Time
// // // // {
// // // //     int hours;
// // // //     int minutes;
// // // //     int seconds;
// // // // };

// // // // Time operator-(const Time &t1, const Time &t2)
// // // // {
// // // //     Time result;
// // // //     int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
// // // //     int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
// // // //     int difference = totalSeconds1 - totalSeconds2;

// // // //     result.hours = difference / 3600;
// // // //     difference %= 3600;
// // // //     result.minutes = difference / 60;
// // // //     result.seconds = difference % 60;

// // // //     return result;
// // // // }

// // // // int main()
// // // // {
// // // //     Time t1, t2, result;

// // // //     // cout << "Enter time t1 (hours minutes seconds): ";
// // // //     cin >> t1.hours >> t1.minutes >> t1.seconds;

// // // //     // cout << "Enter time t2 (hours minutes seconds): ";
// // // //     cin >> t2.hours >> t2.minutes >> t2.seconds;

// // // //     result = t1 - t2;
// // // //     cout << "Time difference: " << result.hours << "h " << result.minutes << "m " << result.seconds << "s" << endl;

// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // using namespace std;

// // // struct Time
// // // {
// // //     int hours;
// // //     int minutes;
// // //     int seconds;
// // // };

// // // Time operator-(const Time &t1, const Time &t2)
// // // {
// // //     Time result;
// // //     int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
// // //     int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
// // //     int difference = totalSeconds1 - totalSeconds2;

// // //     result.hours = difference / 3600;
// // //     difference %= 3600;
// // //     result.minutes = difference / 60;
// // //     result.seconds = difference % 60;

// // //     return result;
// // // }

// // // int main()
// // // {
// // //     Time t1, t2, result;

// // //     cout << "Enter time t1 (hours minutes seconds): ";
// // //     cin >> t1.hours >> t1.minutes >> t1.seconds;

// // //     cout << "Enter time t2 (hours minutes seconds): ";
// // //     cin >> t2.hours >> t2.minutes >> t2.seconds;

// // //     result = t1 - t2;
// // //     cout << "Time difference: " << result.hours << "h " << result.minutes << "m " << result.seconds << "s" << endl;

// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // struct Time
// // {
// //     int hours;
// //     int minutes;
// //     int seconds;
// // };

// // Time operator-(const Time &t1, const Time &t2)
// // {
// //     Time result;
// //     int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
// //     int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
// //     int difference = totalSeconds1 - totalSeconds2;

// //     result.hours = difference / 3600;
// //     difference %= 3600;
// //     result.minutes = difference / 60;
// //     result.seconds = difference % 60;

// //     return result;
// // }

// // int main()
// // {
// //     Time t1, t2, result;

// //     char colon;
// //     cout << "Enter time t1 (hours:minutes:seconds): ";
// //     cin >> t1.hours >> colon >> t1.minutes >> colon >> t1.seconds;

// //     cout << "Enter time t2 (hours:minutes:seconds): ";
// //     cin >> t2.hours >> colon >> t2.minutes >> colon >> t2.seconds;

// //     result = t1 - t2;
// //     cout << "Time difference: " << result.hours << ":" << result.minutes << ":" << result.seconds  << endl;

// //     return 0;
// // }
// #include <iostream>
// #include <iomanip> // Include this header for formatting
// using namespace std;

// struct Time
// {
//     int hours;
//     int minutes;
//     int seconds;
// };

// Time operator-(const Time &t1, const Time &t2)
// {
//     Time result;
//     int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
//     int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
//     int difference = totalSeconds1 - totalSeconds2;

//     result.hours = difference / 3600;
//     difference %= 3600;
//     result.minutes = difference / 60;
//     result.seconds = difference % 60;

//     return result;
// }

// int main()
// {
//     Time t1, t2, result;

//     char colon;
//     cout << "Enter time t1 (hours:minutes:seconds): ";
//     cin >> t1.hours >> colon >> t1.minutes >> colon >> t1.seconds;

//     cout << "Enter time t2 (hours:minutes:seconds): ";
//     cin >> t2.hours >> colon >> t2.minutes >> colon >> t2.seconds;

//     result = t1 - t2;

//     cout << "Time difference: "
//          << setw(2) << setfill('0') << result.hours << ":"
//          << setw(2) << setfill('0') << result.minutes << ":"
//          << setw(2) << setfill('0') << result.seconds << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
struct Time
{
    int hours;
    int minutes;
    int seconds;
};
void calcDifference(const Time &t1, const Time &t2, Time &result)
{
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int timeDifference = totalSeconds1 - totalSeconds2;

    // if(timeDifference<0){
    //   cerr<<"Error: Start time should should be greater than finish time."<<std::endl;
    // return ;
    //  }
    result.hours = timeDifference / 3600;
    result.minutes = (timeDifference % 3600) / 60;
    result.seconds = timeDifference % 60;
}
int main()
{
    Time start, finish, difference;
    char colon;

    cin >> start.hours >> colon >> start.minutes >> colon >> start.seconds;

    cin >> finish.hours >> colon >> finish.minutes >> colon >> finish.seconds;
    if (start.hours < 0 || start.hours > 23 ||
        start.minutes < 0 || start.minutes > 59 ||
        start.seconds < 0 || start.seconds > 59 ||
        finish.hours < 0 || finish.hours > 23 ||
        finish.minutes < 0 || finish.minutes > 59 ||
        finish.seconds < 0 || finish.seconds > 59)
    {
        cerr << "Error: Invalidtime values." << endl;
    }
    // calcDifference(start,finish,difference);

    // cout<<"0"<<difference.hours<<":"<<difference.minutes<<":"<<difference.seconds<<std::endl;
    // return 0;
    calcDifference(start, finish, difference);

    cout << setfill('0') << setw(2) << difference.hours << ":" << setfill('0') << setw(2) << difference.minutes << ":" << setfill('0') << setw(2) << difference.seconds << endl;
    return 0;
}