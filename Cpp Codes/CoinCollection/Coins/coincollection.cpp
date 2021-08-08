#include "coincollection.h"
#include <iostream>
CoinCollection::CoinCollection()
{

}

void CoinCollection::addCoin(Coin &c){

    arr[count]= &c;
    count++;
}

int CoinCollection::getTotalValue(){
    int sum = 0;
    for(int i =0; i<count;i++){
      sum =sum+arr[i]->getValue();
    }
    return sum;
}

int CoinCollection::getTotalValueDecade(int decade){
    decade = decade*10;
    int sum = 0;
    for (int j =0; j <10;j++){
        decade = decade+1;
        for(int i =0; i<count;i++){

            if(arr[i]->getYearIssued()==decade){
                sum = sum+arr[i]->getValue();
            }
        }
    }

    return sum;
}
