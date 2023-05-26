#include <stdio.h>
int main()
{
    int n,a=1,b=1,i,r;
    printf("here comes the fibo, but at first, tell me how many steps you wanna go furthur?\n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            a=a+b;
        }
        if(i%2!=0)
        {
            b=a+b;
        }
    }
    if(i%2==0)
        r=a;
    if(i%2!=0)
        r=b;
    printf("the n fibo you chose issss %d",r);
    return 0;
}