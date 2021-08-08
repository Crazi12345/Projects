#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num =1;
    int count=1;
    int readBuffer=0;
    int progress =0;
    for(int i = 2; i<20000;i++){
        count =1;
         //cout << num << endl;
         num = num +i;
         readBuffer++;
         if(readBuffer==1000){
             progress++;
             cout << "you are ("<<progress<<"/20)" <<endl;
             readBuffer = 0;
         }
         if(num%2!=0){
             for(int j = 1; j <=num/2;j++){
                 j++;
                  if(num%j==0){
                     count++;
                     if(count==500){
                         cout <<num<<endl<<endl;

                     }
         }}}
         else{
        for(int j = 1; j <=num/2;j++){
             if(num%j==0){
                count++;
                if(count==500){
                    cout <<num<<endl<<endl;

                }

            }
        }
    }}

    return 0;
}
