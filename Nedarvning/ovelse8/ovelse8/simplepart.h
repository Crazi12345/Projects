#ifndef SIMPLEPART_H
#define SIMPLEPART_H
#include <iostream>
class SimplePart
{
public:
  SimplePart(std::string name, double cost);
  virtual std::string getName();
  virtual double getCost();
private:
  std::string _name;
  double _cost;

};

#endif // SIMPLEPART_H
