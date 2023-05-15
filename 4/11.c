#include <stdio.h>
int fibo();
int main()
{
    int a,b,n,fin;
    printf("please enter the first two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("please enter how many steps you wanna go forward:\n")
    scanf("%d",&n);
    fin=fibo(a,b,n);
    printf("%d",fin);
    return 0;
}
int fibo(int a, int b, int n)
{
    int c,i;
    for(i=2;i=n;i++)
    {
        c=a+b;

    }
}