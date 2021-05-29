#include "coin.h"

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
    value = catValue;

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

int Coin::getValue()
{
    return value;
}

void Coin::changeValue(int num)
{
    value = value + num;
}

Coin::~Coin()
{

}


