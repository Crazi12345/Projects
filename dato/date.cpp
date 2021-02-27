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
        if(i%2==0){
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
        else doy=doy+31;
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
                if(day<0||day>28){
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
        if(day<0||day>31){
            return false;
        }
        return true;
    }

}
