#include <stdio.h>
#include <unistd.h>
void count();
int main()
{
    int n;
    printf("please enter your number\n");
    scanf("%d",&n);
    printf("%d\n",n);
    count(n);
    return 0;
}
void count(int n)
{
    if(n!=1)
    {
        n--;
        printf("%d\n",n);
        sleep(1);
        count(n);
    }
}