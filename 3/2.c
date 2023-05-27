#include <stdio.h>

int main()
{
    int num, r, i;
    int b, a, statb;
    char ans;

    printf("please enter your number\n:");
    scanf("%d", &num);

    for (i = 1; i < 100000000; i++)
    {
        b = 2;
        a = i;
        statb = b;
        for (int j = 0; j < a; j++)
            b = b * statb;
        r = b - 1;

        if (num % r == 0)
        {
            b = 2;
            a = i - 1;
            statb = b;
            for (int j = 0; j < a; j++)
                b = b * statb;

            if (num / r == b)
            {
                printf("yes this number is perfect!");
                break;
            }
            else
            {
                printf("no this number is not perfect :(");
                break;
            }
        }
    }

    printf("\n\ndo you wanna continue?(Y,y,1,N,n,0)\n:");
    scanf(" %c", &ans);
    if (ans == 'Y' || ans == 'y' || ans == '1')
        main();
    else
        return 0;

    return 0;
}