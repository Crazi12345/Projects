#include <stdio.h>

int main()
{
    int num = 0b0001;
    num = num << 99;
    char text[20];
    sprintf(text,"%d",num);
    printf(text);
    return 0;
}
