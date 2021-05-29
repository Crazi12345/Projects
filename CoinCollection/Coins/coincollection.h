#ifndef COINCOLLECTION_H
#define COINCOLLECTION_H

#include"coin.h"
class CoinCollection
{
public:
    CoinCollection();

    void addCoin(Coin c);
    int getTotalValue();
    int getTotalValueDecade(int decade);
private:
    int count = 0;
    Coin arr[300];
};

#endif // COINCOLLECTION_H
