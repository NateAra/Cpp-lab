#ifndef CPP_LAB_DATE_H
#define CPP_LAB_DATE_H


class Date {
private:
    int year;
    int month;
    int day;
    bool isValidDate(int year, int month, int day) const;

public:
    Date(int year, int month, int day);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

};


#endif
