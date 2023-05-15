#include <stdio.h>
float a,b,c;
void plus();
void minus();
void devide();
void times();
int main()
{
    char op;
    printf("C calculator, please insert two float numbers\n");
    scanf("%f%f",&a,&b);
    printf("please choose your operation (+,-,/,*)\n");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        plus();
        break;
    case '-':
        minus();
        break;
    case '/':
        devide();
        break;
    case '*':
        times();
        break;
    }
    return 0;
}
void times()
{
    c=a*b;
    printf("%f",c);
}
void minus()
{
    c=a-b;
    printf("%f",c);
}
void devide()
{
    c=a/b;
    printf("%f",c);
}
void plus()
{
    c=a+b;
    printf("%f",c);
}