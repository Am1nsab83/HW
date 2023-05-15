#include <stdio.h>
float faren(float);
int main()
{
    float c,far;
    printf("please enter the room temperature\n");
    scanf("%f",&c);
    far=faren(c);
    printf("room temperature in farenheit is %f",far);
    return 0;
}
float faren(float c)
{
    float ret;
    ret=c*9/5;
    return ret;
}