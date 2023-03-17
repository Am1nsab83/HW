#include <stdio.h>
int main()
{
    float a4p,pp,t,tot,a4np,pnp,tf,totf;
    printf("please insert A4 price, then pen price, then Inflation\n");
    scanf("%f\n%f\n%f",&a4p,&pp,&t);
    tot=a4p*50+pp*150;
    printf("total cost for A4 papers and pens in this company for this year is %f\n",tot);
    printf("total");
    tf=t/100;
    a4np=a4p+(a4p*tf);
    pnp=pp+(pp*tf);
    totf=pnp*150+a4np*50;
    printf("\n and total cost for A4 papers and pens for the next year is %f",totf);
    return 0;
}