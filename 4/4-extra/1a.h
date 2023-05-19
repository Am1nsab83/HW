#include <stdio.h>
int what(int a)
{
    if(a%3 == 0 || a%4 == 0)
        return 1;
    else
        return 0;
}