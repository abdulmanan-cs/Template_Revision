#pragma once
#include <iostream>
using namespace std;
class Employee
{
public:
    virtual float calculateSalary() = 0;
    virtual ~Employee()
    {
    }
};
