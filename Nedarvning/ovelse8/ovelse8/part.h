#ifndef PART_H
#define PART_H
#include <iostream>

class Part
{
public:
   Part();
   virtual std::string getName();
   virtual std::string getDescription();
   virtual double getCost();
};

#endif // PART_H
