#include <stdio.h>
int main()
{
    int i,len;
    printf("how many numers you got\n:");
    scanf("%d",&len);
    int n[len];
    for(i=0;i<len;i++)
    {
        printf("enter numer %d\n:",i+1);
        scanf("%d",&n[i]);
    }
    set(n,len);
    for(i=0;i<len;i++)
    {
        printf("%d\n",n[i]);
    }
}
void set(int *n, int len)
{
    int temp, i, j, k;
   for (j = 0; j < len; ++j)
   {
      for (k = j + 1; k < len; ++k)
      {
         if (n[j] > n[k])
         {
            temp = n[j];
            n[j] = n[k];
            n[k] = temp;
         }
      }
   }
}