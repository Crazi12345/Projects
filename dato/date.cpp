#include "date.h"
#include <iostream>
using namespace std;

Date::Date()
{

}
Date::Date(int num){
date=num;

}
int Date::getDate(){

    return date;
}



int Date::getYear(){
year = date/10000;
return year;
}

int Date::getMonth(){

month= (date-year*10000)/100;
return month;

}

int Date::getDay(){

day=(date-year*10000)-month*100;
return day;
}

void Date::print(){

  cout << "År: "<<year<<"     Måned: "<<month<<" Dag: "<<day<<endl;
  cout <<'\n'<< "Kvartal: "<<quarter<<endl;

}

int Date::getQuarter(){
    quarter=(month-1)/3+1;
    return quarter;

}

bool Date::isLeapYear(){
    if (year%4==0 &&year%100!=0){
        return true;
    }
    else if(year%400==0){
        return true;
    }
    else {
        return false;
    }

}
int Date::dayOfTheYear(){
doy=0;
    for(int i=1;i<month;i++){
        if(i%2==0&&i<7){
            if(i==2){
                if(isLeapYear()==true){
                    doy=doy+29;
                }
                else{
                     doy=doy+28;
                }
            }
            else doy=doy+30;
        }
        else if(i%2!=0&&i>6){
            if(i==7){
                doy=doy+31;
              }
            else{
            doy=doy+30;
              }
          }
        else{
            doy=doy+31;}

    }

    doy=doy+day;

    return doy;
}
bool Date::isValid(){
    if(year<1700 || year>3000){
        return false;
    }
    else if(month<1||month>12){
        return false;
    }
    else {
        if(month%2==0&&month<8){
            if(month==2){
                if(isLeapYear()==true){
                    if(day<1||day>29){
                        return false;
                    }
                }
                if(day<1||day>28){
                    return false;
                }
            }
            if(day<1||day>30){
                return false;
            }
        }
        else if (month%2!=0&&month>7)
        {
            if(day<1||day>30){
                return false;
        }
        }
        if(day<1||day>31){
            return false;
        }
        return true;
    }

}
void Date::incrementDate(){
    date++;

    getDay();
    getMonth();
    getYear();
     while (isValid()==false){
         date++;
         getDay();
         getMonth();
         getYear();
     }

   //  cout << "Next date: "<< date << endl;
    // print();

}

void Date::deincrementDate(){
    date = date-1;
    getDay();
    getMonth();
    getYear();
    while (isValid()==false){
        date=date-1;
        getDay();
        getMonth();
        getYear();
    }
    cout<<"Previous date: "<< date << endl;

}
int Date::diffInDays(Date d2){
 d2.getDate();
 d2.getYear();
 d2.getMonth();
d2.getDay();

  cout <<""<<endl;
  int extra_year=0;
  int extra_lyear=0;
  if(getYear()>d2.getYear()){
      for (int i = d2.getYear();i<getYear();i++){

          if (i%4==0 &&i%100!=0){
              extra_lyear++;
          }
          else if(i%400==0){
                extra_lyear++;
            }
          else {
              extra_year++;
          }

        }
    }
  else {
      for (int i = getYear();i<d2.getYear();i++){

          if (i%4==0 &&i%100!=0){
              extra_lyear++;
          }
          else if(i%400==0){
                extra_lyear++;
            }
          else {
              extra_year++;
          }

        }
    }
  cout<<"Leap years: "<<extra_lyear<<endl;
  cout<<"year: "<<extra_year<<endl;
  extra_lyear = extra_lyear*366;
  extra_year=extra_year*365;


  int diff = d2.dayOfTheYear()-doy+extra_lyear+extra_year;
  return diff;
}
int Date::weekday(){

  int weekday=0;
  Date start=17000301;

  for (int i=start.getDate();i<date;i++){

      weekday++;
      if(weekday>7){
          weekday=1;
        }


    start.incrementDate();
    i=start.getDate();
     // cout<<i<<endl;
  //   cout <<i<<" "<<weekday<<endl;
    }
  return weekday;
}

