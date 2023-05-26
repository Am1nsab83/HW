#include <stdio.h>
int main()
{
    int n, i, j;
    float r = 0;
    float b;
    printf("how many steps you wanna continue?\n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        b = i;
        if (b == 0)
            b = 1;
        else
        {
            for(j=b-1; j>0; j--)
                b = b * j;
        }
        r = r + 1 / b;
    }
    printf("%f",r);

    return 0;
}