#include <stdio.h>
void mid(int num, int* r1, int* r2)
{
    int l = 0;
    int t = num;
    while (t != 0) {
        l++;
        t /= 10;
    }
    int dv = 1,i;
    for (i = 0; i < l / 2; i++) {
        dv *= 10;
    }
    if (l % 2 == 0) {
        *r1 = (num / dv) % 10;
        *r2 = (num / (dv / 10)) % 10;
    } else {
        *r1 = (num / dv) % 10;
        *r2 = -1;
    }
}