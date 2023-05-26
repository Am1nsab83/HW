#include <stdio.h>

int main()
{
    double num;
    int intPart, decPart;
    printf("Enter a number: ");
    scanf("%lf", &num);
    intPart = (int)num;
    decPart = (num - intPart) * 1000;
    decPart = (decPart > 0) ? (decPart + 0.5) : (decPart - 0.5);
    printf("Integer part: %d\n", intPart);
    printf("Decimal part: %d\n", decPart);
    return 0;
}