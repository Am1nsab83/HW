#include <stdio.h>
unsigned long long int plus();
unsigned long long int stn();
void read();
int main()
{
    char str1[21],str2[21];
    unsigned long long int num1=0,num2=0,sum=0;
    printf("please enter your first number [20]\n:");
    read(str1);
    printf("please enter your second number [20]\n:");
    read(str2);
    num1=stn(str1);
    num2=stn(str2);
    sum = plus(num1,num2);
    printf("\n%llu",sum);
}
void read(char* *str)
{
    gets(str);
}
unsigned long long int stn(char *str)
{
    unsigned long long int num = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}
unsigned long long int plus(unsigned long long int num1,unsigned long long int num2)
{
    unsigned long long int sum;
    sum = num1+num2;
    return sum;
}