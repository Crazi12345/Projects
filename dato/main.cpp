#include <iostream>
#include "date.h"
#include "cpr.h"
using namespace std;

int main()
{
    Date d(20090911);
    cout << d.getDate() << endl;

    cout <<d.getYear() <<endl;
    cout <<d.getMonth() <<endl;
    cout << d.getDay()<<endl;
    cout<<d.getQuarter()<<endl;
    d.print();
    cout << "Skudår: "<<d.isLeapYear()<<endl;
    cout << "day of year: "<<d.dayOfTheYear()<<endl;
    cout << "Er denne Dato like okay?: "<<d.isValid()<<endl;

    cout << endl <<endl << "///////////////////////////////////////////////////"<< endl << endl;

    CPR c("0705015133");
    cout << c.getCprNr()<<endl;
    cout << c.getDay() << endl;
    return 0;
}
