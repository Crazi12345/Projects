#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int potens(int tal){
    string num = to_string(tal);
    int sum=0;
    for(int i = 1; i<=num.length();i++){
        int temp = ((int)(num[i-1])-48);

        sum = sum+pow(temp,i);

    }
    if(sum==tal){
        return tal;
    }
    else {
        return -1;
    }
}


int main()
{
    for(int i = 0; i<1000;i++){
        if(potens(i)!=-1){
            cout << potens(i)<< endl;
        }
    }
    return 0;
}
