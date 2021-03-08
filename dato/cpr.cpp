#include "cpr.h"
#include <iostream>
#include <string>
using namespace  std;
CPR::CPR(string num)
{
  nummeret = num;
}

string CPR::getCprNr(){
  return nummeret;
}

int CPR::getDay(){
  int day = stoi(nummeret);
  day = day/100000000;
  return day;
}


int CPR::getMonth(){
    int month = stoi(nummeret);
    month = month/1000000;
    return month;
}


/*int date = stoi(nummeret);
int date_tmp = date/1000000;
date_tmp = date_tmp*1000000;

int day = date-date_tmp;
day=day/10000;*/
