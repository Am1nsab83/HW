#include <stdio.h>
#include "./2a.h" /*mid for this header*/
int main()
{
    int f1,f2=-1,num;
    printf("please enter your number( if one id -1, it means the number counts are odd, and theres only one number in the middle):\n");
    scanf("%d",&num);
    mid(num,&f1,&f2);
    printf("%d,%d",f1,f2);
}