#pragma once
#include "Course.h"
class OfflineCourse : public Course
{
private:
    int months;
    int hoursPerDay;
public:
    OfflineCourse(int m, int h)
    {
        months = m;
        hoursPerDay = h;
    }
    int duration()
    {
        return months * 30 * hoursPerDay;
    }
};
