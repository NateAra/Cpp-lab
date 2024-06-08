#ifndef CPP_LAB_TIME_H
#define CPP_LAB_TIME_H


class Time {
private:
    int hour;
    int minute;
    int second;
    bool isValidTime(int hour, int minute, int second) const;

public:
    Time(int hour, int minute, int second);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

};


#endif
