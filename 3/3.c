#include <stdio.h>
{
    int i,j;
    const char ch='*';
    printf("you know whats gonna happen ;)\n\n ");
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c",ch);
        printf("\n");
    }
    return 0;
}