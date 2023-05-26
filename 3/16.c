#include <stdio.h>
int main()
{
    float f1,f2,t,d,m;
    printf("please enter two floats\n:");
    scanf("%f%f",&f1,&f2);
    if(f1!=0&&f2!=0)
    {
        m=f1-f2;
        printf("f1-f2= %f\n",m);
        d=f1/f2;
        printf("f1/f2= %f\n",d);
        t=f1*f2;
        printf("f1*f2= %f\n",t);
        main();
    }
    else
        return 0;
}