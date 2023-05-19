#include <stdio.h>
int what();
int main()
{
    
    int a,r;
    printf("please enter your number\n:");
    scanf("%d",&a);
    r=what(a);
    printf("%d",r);
}
int what(int a)
{
    if(a%3 == 0 || a%4 == 0)
        return 1;
    else
        return 0;
}