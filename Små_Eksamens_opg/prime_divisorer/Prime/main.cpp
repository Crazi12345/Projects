#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int j){

 bool isPrime= true;
  for(int i = 6; i < j;i++){
      if(j%i==0){
          isPrime =false;
      }
  }

  return isPrime;
}
int pdivi(int index){
    vector<int> nums;

    for(int i =0; i<100;i++){
        for (int j = 1; j< i;j++){
            if(i%2==0||i%3==0||i%5==0){
                if(i%j==0 && isPrime(j)==true){
                    break;
                }
                else {
                    nums.push_back(i);
                    break;
                }
            }
        }
    }
    return nums[index];
}



int main()
{for (int i=1; i<10;i++){
   cout <<  pdivi(i)<<endl;}
    return 0;
}
