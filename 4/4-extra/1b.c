#include <stdio.h>
#include "./1a.h"
int main()
{
    int i,r;
    for(i=1;i<1000;i++)
    {
        r=what(i);
        if(r==1)
            printf("%d,",i);
    }
    return 0;
}