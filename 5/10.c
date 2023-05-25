#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    char *word = strtok(str, " ");
    while (word != NULL) 
    {
        if (strlen(word) == 4) 
            printf("love ");
        else 
            printf("%s ", word);
        word = strtok(NULL, " ");
    }
    return 0;
}