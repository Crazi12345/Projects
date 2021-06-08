#include <iostream>
#include <vector>
using namespace std;
int pdivi(int index){
    vector<int> nums;
    bool isPrime = true;
    for(int i =2; i < 100; i++){
        isPrime = true;
        if(i%2!=0 || i%3!=0){
        for(int j =2; j<i;j++){
            if(i%j==0){
                isPrime =false;
                break;
            }
          }
        }
        if(isPrime ==true){
            nums.push_back(i);
        }
    }
    int count =0;
    vector<int> tal;
    for(int k = 3; k<1000;k++){
        bool isFound = true;
        if(k%nums[0]==0||k%nums[1]==0||k%5==0){
           // std::cout << "read" <<std::endl;
            for(int l = 3; l<k;l++ ){
            if(k%nums[l]==0){
                isFound = false;

            }
            else{
                //std::cout << "read" <<std::endl;
                count++;
               tal.push_back(k);
               std::cout << tal.at(count-1);


            }
            }
        }
    }
    return tal[index];
}

int main()
{
    pdivi(10);
    return 0;
}
