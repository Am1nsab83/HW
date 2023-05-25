#include <stdio.h>
#include <string.h>
char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char A[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char vowel[10]={'A','E','I','O','U','a','e','i','o','u'};
int checka(char str[],int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=26;j++)
        {
            if(str[i]==a[j])
                count++;
            else
                continue;
        }
    }
    return count;
}
int checkA(char str[],int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=26;j++)
        {
            if(str[i]==A[j])
                count++;
            else
                continue;
        }
    }
    return count;
}
int checknum(char str[],int len)
{
    int count=0;
    for (int i = 0; i < len; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') 
            count++;
    }
    return count;
}
int checkvow(char str[],int len)
{
   int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=10;j++)
        {
            if(str[i]==vowel[j])
                count++;
            else
                continue;
        }
    }
    return count; 
}
int main()
{
    char str[100];
    printf("please enter your string\n:");
    fgets(str,100,stdin);
    int len = strlen(str);
    int a=checka(str,len);
    int A=checkA(str,len);
    int num=checknum(str,len);
    int vow=checkvow(str,len);
    printf("the number of small chars:%d\nthe number of big chars:%d\nthe number of numbers:%d\nand at last the number of vowels:%d",a,A,num,vow);
    return 0;
}