
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Pos{
           int x; int y;
          };

void printArr(int arr[][20]){
for(int i = 0; i<20;i++){
    for(int j = 0; j<20;j++){

       cout << arr[i][j]<< " ";
    }   cout << endl;
}
}

int main()
{Pos p;
    int numbers[20][20];
    p.x=0;
    p.y=0;
    numbers[0][0];
    for (int i = 0; i<20;i++){

        for(int j = 0; j<20;j++){

            numbers[i][j] = 0;
        }
    }
      numbers[0][0]= 2;
      numbers[19][19]=2;
      int num =0;
     while(p.x != 19 || p.y!=19){
         num++;
             numbers[p.x+num][p.y]=p.x;
            }



      printArr(numbers);


    return 0;
}
