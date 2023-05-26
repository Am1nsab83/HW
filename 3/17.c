#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n != '\n')
    {
        main();
        printf("%c", n);
    }
    return 0;
}