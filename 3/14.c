#include <stdio.h>
int main()
{
    int a, b, c;
    float r1, r2;
    float delta;
    double r;
    int i;
    printf("ax^2+bx+c:(a,b,c)\n:");
    scanf("%d%d%d", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta < 0)
        printf("there are no answers for it");
    if (delta > 0)
    {
        r = delta / 2;
        for (i = 0; i < 10; i++)
        {
            r = (r + delta / r) / 2;
        }

        r1 = (-1 * b + r) / (2 * a);
        r2 = (-1 * b - r) / (2 * a);
    }
    if (delta == 0)
    {
        r1 = (-1 * b + r) / (2 * a);
        r2 = 0;
    }
    printf("\nf1=%f\nf2=%f", r1, r2);
    return 0;
}