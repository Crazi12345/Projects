#include <iostream>
#include <string>
#include <vector>
using namespace std;

int differentLetters(string s){

    vector<char> used;
     int num = 1;
bool    isNew = true;
    used.push_back(s.at(0));


    for (int i =1; i<s.length();i++){
        isNew = true;
        for(int j = 0; j< used.size();j++){
            if(s[i]==used[j]){
                isNew = false;
            }

        }
        if(isNew == true){
            used.push_back(s[i]);
        }

    }
    return used.size();
}


int main()
{    string s = "hhkk";
    cout << differentLetters(s)<< endl;
    return 0;
}
