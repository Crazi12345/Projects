#ifndef DATE_H
#define DATE_H


class Date
{
public:
    Date();
    Date(int num);
    int getDate();
    int getYear();
    int getMonth();
    int getDay();
    void print();
    int getQuarter();
    bool isLeapYear();
    int dayOfTheYear();
    bool isValid();
    void incrementDate();

private:
    int date;
    int year;
    int month;
    int day;
    int quarter;
    int doy;
};

#endif // DATE_H
