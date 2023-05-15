#include <stdio.h>
void pr(char,int,int);
int main()
{
    char ch;
    int i,j;
    printf("enter character first, then first column then next one\n:");
    scanf(" %c%d%d",&ch,&i,&j);
    pr(ch,i,j);
    return 0;
}
void pr(char ch, int i, int j)
{
    int p=0;
    while(p<i)
    {
        printf(" ");
        p++;
    }
    p=i;
    while(p<=j)
    {
        printf("%c",ch);
        p++;
    }
}