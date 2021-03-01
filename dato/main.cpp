#include <iostream>
#include "date.h"
using namespace std;

int main()
{
    Date d(20120931);
    cout << d.getDate() << endl;
    cout <<d.getYear() <<endl;
    cout <<d.getMonth() <<endl;
    cout << d.getDay()<<endl;
    cout<<d.getQuarter()<<endl;
    d.print();
    cout << "Skudår: "<<d.isLeapYear()<<endl;
    cout << "day of year: "<<d.dayOfTheYear()<<endl;
    cout << "Er denne Dato like okay?: "<<d.isValid()<<endl;
     d.incrementDate();

    return 0;
}
