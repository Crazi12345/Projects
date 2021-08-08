#include "simplepart.h"
#include "part.h"
SimplePart::SimplePart(std::string name, double cost)
{
   //std::cout << "Simple Created" << std::endl;
   // std::cout << name << "|||||"<<cost<< std::endl;
    _name = name;
    _cost = cost;
}

std::string SimplePart::getName(){

    return _name;
}


double SimplePart::getCost(){

    return _cost;
}

