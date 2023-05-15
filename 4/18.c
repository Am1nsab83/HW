#include <stdio.h>
int pr();
char ch;
int main()
{
    int i,j;
    printf("enter character first, then amount of chars you want in the line, and then ammount of lines\n:");
    scanf(" %c%d%d",&ch,&i,&j);
    pr(i,j);
    return 0;
}
int pr(int i, int j)
{
    int p;
    for(p=0;p<i;p++)
        printf(" %c",ch);
    j--;
    if(j!=0)
    {
        printf("\n");
        pr(i,j);
    }
    else
        return 0;
}