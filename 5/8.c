#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void revstr(char* str,int len);
int main()
{
    int len = 1;
    char *sent = malloc(len * sizeof(char));
    printf("enter the word you want\n:");
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF) 
    {
        if (i == len - 1) 
        {
            len *= 2;
            sent = realloc(sent, len * sizeof(char));
        }
        sent[i++] = c;
    }
    sent[i] = '\0';
    len = strlen(sent);
    char *sentold = malloc(len * sizeof(char));
    strncpy(sentold, sent, len);
    revstr(sent,len);
    if(strcmp(sent,sentold)==0)
        printf("\nYES, you can say word %s backwards!\n",sentold);
    else
        printf("\nNO, you can not say word %s backwards :(\n",sentold);
    puts(sent);
    free(sent);
    free(sentold);
    return 0;
}
void revstr(char* str,int len)  
{ 
    int i,temp;     
    for (i = 0; i < len/2; i++)  
    {    
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }  
}