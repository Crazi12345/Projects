#include <iostream>

using namespace std;

void divi(){
    int count =0;
    int sum= 0;
    for(int i=1; count < 10;i++){
        sum=0;
        for(int j = 1; j<i;j++){
            if(i%j==0){
                sum= sum+j;
                if(sum >i)
                {count++;
                cout << i<<endl;}
            }
        }
    }
}

int main()
{
    divi();
    return 0;
}
