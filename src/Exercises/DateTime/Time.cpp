#include "Time.h"
#include "iostream"

Time::Time(int hour, int minute, int second) {
    if (!isValidTime(hour, minute, second))
        throw std::invalid_argument("Invalid Time");

    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

bool Time::isValidTime(int hour, int minute, int second) const {
    if (hour < 0 || hour > 23) return false;
    if (minute < 0 || minute > 59) return false;
    if (second < 0 || second > 59) return false;

    return true;
}
