#ifndef EMA_H
#define EMA_H
#include <iostream>

class EMA
{
public:
    EMA();
    EMA(std::string);
   // ~EMA();
    std::string getEMA();
    void setEMA(std::string);

    bool isValid();
    private:
int snabelA();


    bool dot();

    bool checkLengths();

    bool checkChars();

    std::string emailAddress;

};

#endif // EMA_H
