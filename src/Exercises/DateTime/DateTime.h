#ifndef CPP_LAB_DATETIME_H
#define CPP_LAB_DATETIME_H
#include "Date.h"
#include "Time.h"


class DateTime : public Date, public Time{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
};


#endif
