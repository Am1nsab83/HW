//C-calc v1.2 Chamran University 
#include <stdio.h>
double a;
void squreroot();
void operate();
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
    printf("\nplease enter your operator (-,+,/,*,^,!,r)\"type \'h\' for help\"\n");
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
        case 'r':
            squreroot();
            break;
        case 'c':
            a=0;
            main();
            break;
        case 'e':
            return;
            break;
        case 'h':
            printf("help page:\n1:\'e\':exit\n2:\'c\':for reseting the number\n3:\'h\':this page\n4:\'r\':its for squreroot\n");
            operate();
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
    operate();
}
void minus()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a-b;
    printf("%lf",a);
    operate();
}
void times()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a*b;
    printf("%lf",a);
    operate();
}
void devide()
{
    double b;
    printf("enter your next number\n:");
    scanf("%lf",&b);
    a=a/b;
    printf("%lf",a);
    operate();
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
    operate();
}
void factor()
{
    double s=1;
    int i;
    for(i=1;i<=a;i++)
        s=s*i;
    printf("%lf",s);
    operate();
}
void squreroot()
{
    double r = a/2;
    int i;
    for (i = 0; i < 10; i++) {
        r = (r + a / r) / 2;
    }
    printf("%lf",r);
    operate();
}