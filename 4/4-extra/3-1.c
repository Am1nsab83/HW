#include <stdio.h>
int main()
{
    int x=1;
    {
        int x=2;
    }
    printf("%d",x);
}

/*

out:

1

*/