#include <iostream>

using namespace std;

int main()
{
float num = 2;

for(int i = 0; i<1000;i++){

   num = num*num;
   while(num>10 || num < 1){
       num = num/10;


   }
    cout << num<<endl;
}

    return 0;
}
