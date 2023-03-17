#include <stdio.h>
int main()
{
    const float sa=3.156;
    int a;
    float f;
    printf("please insert your age (only in years)\n:");
    scanf("%d",&a);
    f=a*sa;
    printf("your age in seconds is equel to:%f * 10^7",f);
    return 0;
}