#include <stdio.h>
int main()
{
    {
        int x=2;
    }
    printf("%d",x);
}

/*
3-2.c: In function ‘main’:
3-2.c:7:17: error: ‘x’ undeclared (first use in this function)
    7 |     printf("%d",x);
      |                 ^
3-2.c:7:17: note: each undeclared identifier is reported only once for each function it appears in
*/