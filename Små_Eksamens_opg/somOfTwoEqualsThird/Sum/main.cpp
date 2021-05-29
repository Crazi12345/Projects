#include <iostream>

using namespace std;

bool sumOfTwoEqualsThird(int arr[],int length){
int sum = 0;
    for(int i = 0; i<length; i++){

       for(int j =0; j<length; j++){

           for(int k = 0; k<length; k++){
               if (arr[i]+arr[j]==arr[k]&&i!=j){

                   return true;
               }
           }
       }
    }
    return false;
}



int main()
{   int a[] = {46,39,18,15,21};
   cout <<  sumOfTwoEqualsThird(a,5)<<endl;
    return 0;
}
