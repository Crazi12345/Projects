#ifndef SIMPLEPART_H
#define SIMPLEPART_H
#include <iostream>
#include "part.h"
class SimplePart: public Part
{
public:
  SimplePart(std::string name, double cost);
  virtual std::string getName() override;
  virtual double getCost() override;

private:
  std::string _name;
  double _cost;
};

#endif // SIMPLEPART_H
