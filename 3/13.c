#include <stdio.h>
int main()
{
    int d, m, y, h, hm, bd, bm, by;
    int rd, rm, ry;
    printf("please enter the day, month, year of your birthday\n:");
    scanf("%d%d%d",&bd,&bm,&by);
    printf("please enter the current minute, hour, day, month, year in order\n:");
    scanf("%d%d%d%d%d",&hm,&h,&d,&m,&y);
    rd = bd - d;
    if(rd < 0)
        rd *= -1;
    rm = bm - m;
    if(rm < 0)
        rm *= -1;
    ry = y - by;
    printf("you are %d years and %d months and %d days and %d hours and %d minutes and 60 seconds old", ry, rm, rd, h, hm);
    return 0;
}