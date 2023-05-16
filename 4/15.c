#include <stdio.h>
double root(double);
void calc(int,int,int);
int main()
{
    int a,b,c;
    printf("insert a,b,c of this equation: ax^2+bx+c one be one (a,b,c)\n:");
    scanf("%d%d%d",&a,&b,&c);
    calc(a,b,c);
    return 0;
}
void calc(int a, int b, int c)
{
    double delta;
    float ansa,ansb;
    delta=b*b-4*a*c;
    if(delta<0)
        printf("this equation doesnt have any answers");
    if(delta == 0)
    {
        ansa=-b/2*a;
        printf("answer of this equation equals to %f",ansa);
    }
    if(delta>0)
    {   
        delta = root(delta);
        ansa=(-1*b+delta)/2*a;
        ansb=(-1*b-delta)/2*a;
        printf("this equeation has two answers\n1:%f\n2:%f",ansa,ansb);
    }
}
double root(double delta)
{
    // Babylonian method
    double r = delta/2;
    int i;
    for (i = 0; i < 10; i++) {
        r = (r + delta / r) / 2;
    }
    return r;
}