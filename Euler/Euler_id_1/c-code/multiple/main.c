#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i<1000;i++){
        if(i%3==0||i%5==0){
            sum+=i;
        }
    }
    int num= sum;
    char text[20];
    sprintf(text, "%d",num);
    printf(text);
    return 0;
}
