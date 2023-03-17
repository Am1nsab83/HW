#include <stdio.h>
int main()
{
    float x,y;
    printf("please insert X\n:");
    scanf("%f",&x);
    y=1/(x*x+x+3);
    printf("%f",y);
    return 0;
}