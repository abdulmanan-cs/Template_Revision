#pragma once
#include "Course.h"
class OnlineCourse : public Course
{
private:
    int weeks;
    int hoursPerWeek;
public:
    OnlineCourse(int w, int h)
    {
        weeks = w;
        hoursPerWeek = h;
    }
    int duration()
    {
        return weeks * hoursPerWeek;
    }
};
