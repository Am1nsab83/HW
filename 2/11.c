#include <stdio.h>
int main()
{
    float e,s;
    printf("please insert the water as L\n:");
    scanf("%f",&e);
    s=e*950/3;
    printf("there are %f * 10^23 molcoles in this amount of water",s);
    return 0;
}