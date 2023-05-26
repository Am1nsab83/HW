#include <stdio.h>
int main()
{
    int i,j;
    const char ch='$';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=6;j++)
            printf("%c",ch);
        printf("\n");
    }
}