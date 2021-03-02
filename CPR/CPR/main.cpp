#include <iostream>
#include "cpr.h"

int main()
{
    CPR c("0705015133");
    std::cout<<"CPR nummer: "<<c.getCprNr()<<std::endl;
    std::cout<<c.getDay()<<std::endl;

    return 0;
}
