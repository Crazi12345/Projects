#ifndef CPR_H
#define CPR_H
#include <iostream>

class CPR
{
public:
  CPR(std::string);
  std::string getCprNr();
  int getDay();
  int getMonth();
  int getYear();
  int getAge();
  int extractDate(/*Date &date*/);
  bool isValid();

private:
  std::string nummeret;
};

#endif // CPR_H
