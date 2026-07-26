#pragma once
#include "Employee.h"

class PartTimeEmployee : public Employee
{
private:
    int hoursWorked;
    float hourlyRate;

public:
    PartTimeEmployee(int hours, float rate)
    {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    float calculateSalary()
    {
        return hoursWorked * hourlyRate;
    }
};