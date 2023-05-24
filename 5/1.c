#include <stdio.h>
int avalt(int);
int main()
{
    int num,r;
    printf("please enter your number\n:");
    scanf("%d",&num);
    r=avalt(num);
    if(r == 1)
        printf("this number is prime");
    else
        printf("this number is not prime");
    return 0;
}
int avalt(int v)
{
    int i=v-1,b;
    for(i;i>1;i--)
    {
        b=v%i;
        if(b == 0)
            return 0;
    } 
    return 1;
}