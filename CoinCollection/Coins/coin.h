#ifndef COIN_H
#define COIN_H
#include "country.h"
#include <string>
class Coin
{
public:
    Coin();
    Coin(Country&,int,int,std::string,int,int);
    Country& getCountry();
    int getCatalogueNumber();
    int getYearIssued();
    std::string getMotive();
    int getFaceValue();
    int getValue();
    void changeValue(int);
    ~Coin();
private:
    Country country;
    int catalogueNumber;
    int yearIssued;
    std::string motive;
    int faceValue;
    int value;



};

#endif // COIN_H
