#ifndef PART_H
#define PART_H
#include <iostream>

class Part
{
public:
  Part();
  virtual std::string getName()=0;
  virtual std::string getDescription();
  virtual double getCost()=0;
};

#endif // PART_H
