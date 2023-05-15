//C-calc v1.0 Chamran University 
#include <stdio.h>
double a;
void operate();
void ask();
void power();
void factor();
void times();
void minus();
void devide();
void plus();
int main()
{
    printf("this is a calculator made out of C\n");
    printf("please enter your first number\n");
    scanf("%lf",&a);
    operate();
}
void operate()
{
    char op;
    printf("please enter your operator (-,+,/,*,^,!)\n");
    scanf(" %c",&op);
    switch (op)
    {
        case '-':
            minus();
            break;
        case '+':
            plus();
            break;
        case '/':
            devide();
            break;
        case '*':
            times();
            break;
        case '^':
            power();
            break;
        case '!':
            factor();
            break;
    }
}
void plus()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a+b;
    printf("%lf",a);
    ask();
}
void minus()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a-b;
    printf("%lf",a);
    ask();
}
void times()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a*b;
    printf("%lf",a);
    ask();
}
void devide()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a/b;
    printf("%lf",a);
    ask();
}
void power()
{
    int i,b;
    const double statica=a;
    printf("enter your next number\n:");
    scanf("%d",&b);
    if(b==0)
    {
        a=1;
        printf("%lf",a);
    }
    if(b<0)
    {
        b=b*-1;
        for(i=1;i<b;i++)
            a=a*statica;
        a=1/a;
        printf("%lf",a);
    }
    if(b>0)
    {
        for(i=1;i<b;i++)
            a=a*statica;
        printf("%lf",a);
    }
    ask();
}
void factor()
{
    double s=1;
    int i;
    for(i=1;i<=a;i++)
        s=s*i;
    printf("%lf",s);
    ask();
}
void ask()
{
    char yn;
    printf("\nstill wanna continue?(y,n):\n");
    scanf(" %c",&yn);
    if(yn=='y'||yn=='Y')
        operate();
    else
        return;    
}