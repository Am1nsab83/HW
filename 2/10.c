#include <stdio.h>
int main()
{
    const float div=0.5;
    float x,y,s;
    printf("please insert the base, then height\n");
    scanf("%f\n%f",&x,&y);
    s = x*y*div;
    printf("the area of the triangel is equel to:%f",s);
    return 0;
}