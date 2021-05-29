#include <iostream>
#include <string>
using namespace std;

bool neighbors(string s){
    bool isNextTo = false;
    string all = "abcdefghijklmnopqrstuvwxyz";

    for(int i =0; i< s.length();i++){
        for(int j = 0; j< all.length();j++){
            if(s[i]==all[j]){
                if(s[i+1]==all[j+1]){
                    return true;
                }
            }
        }
    }


    return false;
}


int main()
{
    cout << neighbors("krstuoinnaqwlp");
    return 0;
}
