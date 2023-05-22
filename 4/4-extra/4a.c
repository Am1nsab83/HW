#include <stdio.h>
int c12(int num)
{
    int f1 = 0;
    int f2 = 0;
    while (num > 0)
    {
        int dig = num % 10;
        if (dig == 1)
        {
            f1 = 1;
        } 
        else if (dig == 2)
        {
            f2 = 1;
        }
        if (f1 && f2)
        {
            return 1;
        }
        num /= 10;
    }
    return 0;
}
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