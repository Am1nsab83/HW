#include <stdio.h>
int main()
{
    float kg,g;
    printf("please insert the weight in Kilo Grams\n:");
    scanf("%f",&kg);
    g = kg * 1000;
    printf("weight in Grams is:%f",g);
    return 0;
}