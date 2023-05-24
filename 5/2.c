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
    int i,stmax=st[0];
    for(i=0;i<stnum;i++)
    {
        if(st[i]>stmax)
        {
            stmax=st[i];
            st[i]=0;
            out(stmax);
            mor(st,stnum);
        }
    }
}
void out(int out)
{
    printf("%d\n",out);
}