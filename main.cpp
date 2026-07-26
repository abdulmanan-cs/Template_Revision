#include <iostream>
#include "Onlinecourse.h"
#include "Offlinecourse.h"
using namespace std;
int main()
{
    int weeks, hoursWeek;
    int months, hoursDay;
    cout << "Enter Online Course Weeks: ";
    cin >> weeks;
    cout << "Enter Hours Per Week: ";
    cin >> hoursWeek;
    OnlineCourse online(weeks, hoursWeek);
    cout << endl;
    cout << "Enter Offline Course Months: ";
    cin >> months;
    cout << "Enter Hours Per Day: ";
    cin >> hoursDay;
    OfflineCourse offline(months, hoursDay);
    cout << endl;
    cout << "Online Course Duration = "
         << online.duration()
         << " Hours" << endl;
    cout << "Offline Course Duration = "
         << offline.duration()
         << " Hours" << endl;
    return 0;
}