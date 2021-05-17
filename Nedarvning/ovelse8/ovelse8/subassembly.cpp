#include "subassembly.h"
#include "part.h"
#include <string>
SubAssembly::SubAssembly(std::string name, double additionalCost)
{
_name = name;
_additionalCost = additionalCost;
}

std::string SubAssembly::getName()
{
return _name;
}

std::string SubAssembly::getDescription()
{
std::string temp;
for(int i = 0; i<_name.length(); i++){
    temp.push_back(_name[i]);
}
temp.push_back('{');
for (int j = 0; j < _parts.size();j++){

    for(int k =0; k<_parts[j]->getName().length();k++){
        temp.push_back(_parts[j]->getName()[k]);
    }
    temp.push_back(',');
        temp.push_back(' ');
}
temp.at(temp.size()-2)=' ';
temp.at(temp.size()-2)='}';
return temp;
}

double SubAssembly::getCost()

{
  double cost=0;
  for(int i = 0; i<_parts.size();i++){
      cost = _parts.at(i)->getCost()+cost;
  }
  cost = _additionalCost + cost;
return cost;
}

void SubAssembly::addPart(Part *part)
{
_parts.push_back(part);
}

