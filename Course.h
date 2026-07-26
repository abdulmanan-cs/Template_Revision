#pragma once
#include <iostream>
using namespace std;
class Course
{
public:
    virtual int duration() = 0;
    virtual ~Course()
    {
    }
};
