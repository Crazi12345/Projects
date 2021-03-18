#include <iostream>
#include "date.h"
#include "cpr.h"
using namespace std;

int main()
{
 // int x;
  //cin >>x;
    Date d(17000308);

    cout << d.getDate() << endl;

    cout <<d.getYear() <<endl;
    cout <<d.getMonth() <<endl;
    cout << d.getDay()<<endl;
    cout<<d.getQuarter()<<endl;
    d.print();
    cout << "Skudår: "<<d.isLeapYear()<<endl;
    cout << "day of year: "<<d.dayOfTheYear()<<endl;
    cout << "Er denne Dato like okay?: "<<d.isValid()<<endl;
<<<<<<< HEAD
=======

>>>>>>> 85195c546b97745b3a518f7e5e6c41a546917cfb
    cout<<"next day: ";
    d.incrementDate();
    cout <<d.getDate()<<endl;
     d.deincrementDate();
    // cout <<"weekday: "<<d.weekday()<<endl;
     Date d2(20211231);
     cout <<d2.getYear() <<endl;
     cout <<d2.getMonth() <<endl;
     cout << d2.getDay()<<endl;
             cout<<d2.dayOfTheYear()<<endl;
     cout << "what the fuck is this shit: "<<d.diffInDays(d2)<<endl;


    cout << endl <<endl << "///////////////////////////////////////////////////"<< endl << endl;

    CPR c("0705015133");
    cout << c.getCprNr()<<endl;
    cout << c.getDay() << endl;
    cout <<c.getMonth()<<endl;
    return 0;
}
