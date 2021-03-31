#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int var = 10;
  int *a = &var;
 // cout << *a<<endl;
 //cout << a<<endl;
 int numbers[] = {12,25,51,52,11,5,43,-2,1,55};
 int size = (&numbers)[1]-numbers;

 for (int i = 0; i<size;i++){                        // Very useful, for finding size of array
    cout << i<<": "<<numbers[i]<<endl;

   }


cout << "//////////////////////////////////////////"<<endl;


cout << "Sorted" <<endl;
for (int j = 0; j<size;j++){
   // cout << numbers[j];
    for (int k = j+1;k<size;k++){

        if(numbers[j]>numbers[k]){
            int temp = numbers[j];
            numbers[j] = numbers[k];
            numbers[k]=temp;
          }
      }
  }
for (int i = 0; i<size;i++){                        // Very useful, for finding size of array
   cout << i<<": "<<numbers[i]<<endl;

  }



  return 0;
}
