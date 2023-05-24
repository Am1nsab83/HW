#include <stdio.h>
void reg();
void out();
void mor();
int stnum;
int main()
{
    printf("please enter the number of students\n:");
    scanf("%d",&stnum);
    int st[stnum];
    reg(st,stnum);
    mor(st,stnum);
    out(st,stnum);
}
void reg(int* *st,int stnum)
{
    int i;
    for(i=0;i<stnum;i++)
    {
        printf("please enter the student number %d code\n:",i+1);
        scanf("%d",&st[i]);
    }
}
void mor(int *st, int stnum)
{
    int temp, i, j, k;
   for (j = 0; j < stnum; ++j)
   {
      for (k = j + 1; k < stnum; ++k)
      {
         if (st[j] < st[k])
         {
            temp = st[j];
            st[j] = st[k];
            st[k] = temp;
         }
      }
   }
}
void out(int *n,int stnum)
{
    for(int i=0;i<stnum;i++)
        printf("\n%d\n",n[i]);
}