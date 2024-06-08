#include "Date.h"
#include "iostream"

Date::Date(int year, int month, int day) {
    if (!isValidDate(year, month, day))
        throw std::invalid_argument("Invalid Date");
    this->year = year;
    this->month = month;
    this->day = day;
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

bool Date::isValidDate(int year, int month, int day) const {
    int monthsInAYear = 12;
    int daysInAMonth = 31;

    if (year < 1) return false;
    if (month < 1 || month > monthsInAYear) return false;
    if (day < 1 || month > daysInAMonth) return false;

    return true;
}

