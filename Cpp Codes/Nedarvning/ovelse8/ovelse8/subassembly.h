#ifndef SUBASSEMBLY_H
#define SUBASSEMBLY_H
#include "part.h"
#include <iostream>
#include <vector>

class SubAssembly: public Part
{
public:
  SubAssembly(std::string name, double additionalCost);
  virtual std::string getName();
  virtual std::string getDescription();
  virtual double getCost();
  void addPart(Part *part);

private:
  std::vector<Part*> _parts;
  std::string _name;
  double _additionalCost;


};

#endif // SUBASSEMBLY_H
