#include <stdio.h>
#include "./4a.h"
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int mult = num;
    while (!c12(mult))
        mult += num;
    printf("%d",mult);
    return 0;
}