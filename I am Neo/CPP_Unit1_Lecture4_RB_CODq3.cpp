
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