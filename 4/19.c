#include <stdio.h>
double power(double,int);
int main()
{
    int b;
    double a,fin;
    printf("a^b(a,b)\n");
    scanf("%lf%d",&a,&b);
    fin=power(a,b);
    printf("%lf",fin);
    return 0;
}
double power(double a, int b)
{
    int i;
    const double statica=a;
    if(b<0)
    {
        b=-1*b;
        for(i=1;i<b;i++)
            a=a*statica;
        a=1/a;
        return a;
    }
    if(b>0)
    {
        for(i=1;i<b;i++)
            a=a*statica;
        return a;
    }
    else
        return 1;
}