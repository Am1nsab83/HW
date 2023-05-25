#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    getchar();
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;
    char *ptr = strstr(str2, str1);
    if (ptr != NULL)
        printf("The first string was found in the second string at position %ld\n", ptr - str2);
    else 
        printf("The first string was not found in the second string\n");
    return 0;
}