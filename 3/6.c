#include <stdio.h>
int main()
{
    int a,b,i=0;
    printf("enter your 2 numbers\n:");
    scanf("%d%d",&a,&b);
    while(a>=b)
    {
        a=a-b;
        i++;
    }
    printf("\n%d",i);
    return 0;
}