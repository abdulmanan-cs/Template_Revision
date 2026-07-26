#include <iostream>
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"

using namespace std;

int main()
{
    float fixedSalary;
    int hoursWorked;
    float hourlyRate;

    cout << "Enter Full-Time Employee Fixed Salary: ";
    cin >> fixedSalary;

    FullTimeEmployee fullTime(fixedSalary);

    cout << endl;

    cout << "Enter Part-Time Employee Hours Worked: ";
    cin >> hoursWorked;

    cout << "Enter Hourly Rate: ";
    cin >> hourlyRate;

    PartTimeEmployee partTime(hoursWorked, hourlyRate);

    cout << endl;

    cout << "Full-Time Employee Salary = "
         << fullTime.calculateSalary() << endl;

    cout << "Part-Time Employee Salary = "
         << partTime.calculateSalary() << endl;

    return 0;
}