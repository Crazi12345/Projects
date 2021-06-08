#include "coin.h"
#include <iostream>
Coin::Coin()
{

}
Coin::Coin(Country& land, int cat, int year,
           std::string _motive, int fvalue, int catValue){
    country=land;
    catalogueNumber = cat;
    yearIssued=year;
    motive =_motive;
    faceValue = fvalue;
    _value = catValue;


}

Country &Coin::getCountry()
{
    return country;
}

int Coin::getCatalogueNumber()
{
    return catalogueNumber;
}

int Coin::getYearIssued()
{
    return yearIssued;
}

std::string Coin::getMotive()
{
    return motive;
}

int Coin::getFaceValue()
{
    return faceValue;
}
void Coin::changeValue(int num)
{
    _value = _value+num;

}
int Coin::setValue(){

}
int Coin::getValue()
{
    return _value;

}



Coin::~Coin()
{

}


