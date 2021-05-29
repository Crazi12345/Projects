#include <iostream>
#include <string>
using namespace std;


int kvadrattal(int tal){
    int num = tal*tal;
    string  stal = to_string(num);
    if(stal.length()>3){
        string temp = {stal[0],stal[1]};
        string temp2 = {stal[2],stal[3]};
        int first = stoi(temp);
        int second = stoi(temp2);

        if(first+second==tal){
            return tal;
        }
        else{
            return -1;
        }

    }
    else{


    return -1;
}
}




int main()
{
    for(int i=0;i<100;i++){
    if(kvadrattal(i)!= -1){
        cout << kvadrattal(i)<<endl;
    }
    }
    return 0;
}
