#include <stdio.h>
void pr(int num[], int len)
{
    for(int i=0;i<=len;i++)
        printf("\n%d\n",num[i]);
}
int test(int num[],int len)
{
    int i,j;
    int const staticdev=num[(len+1)/2+i];
    for(i=0;i<=(len+1)/2;i++)
    {
        if(num[(len+1)/2+i]!=0)
        {
            for(j=0;j<=len;j++)
                num[j]=num[j]/staticdev;
                return 1;
        }
        else
        {
            i*=-1;
            if(num[(len+1)/2+i]!=0)
            {
                for(j=0;j<=len;j++)
                    num[j]=num[j]/staticdev;
                    return 1;
            }
            i*=-1;
        }
    }
    return 0;
}
int main()
{
    int len,i,j;
    printf("how many numbers do you have?\n:");
    scanf("%d",&len);
    len=len-1;
    int num[len];
    for(i=0;i<=len;i++)
    {
        printf("please enter number %d:\n",i+1);
        scanf(" %d",&num[i]);
    }
    j = test(num,len);
    if(j==1)
        pr(num,len);
    else
        printf("\ntheres no number, larger than 0");
}