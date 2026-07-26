#pragma once
#include "Employee.h"

class FullTimeEmployee : public Employee
{
private:
    float fixedSalary;

public:
    FullTimeEmployee(float salary)
    {
        fixedSalary = salary;
    }

    float calculateSalary()
    {
        return fixedSalary;
    }
};
