#include <stdio.h>
double avgf(float,float,float);
int main()
{
    float a,b,c;
    double avg;
    printf("please enter your 3 numbers:\n");
    scanf("%f%f%f",&a,&b,&c);
    avg=avgf(a,b,c);
    printf("the avrrage of the numbers youve entered is %lf",avg);
    return 0;
}
double avgf(float a, float b, float c)
{
    double an;
    an=(a+b+c)/3;
    return an;
}