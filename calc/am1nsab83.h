#include <stdio.h>
#include <string.h>
void hidden_mwssage(char *password) {
    char correct_password[] = "IhaveNoenemies";
    if (strcmp(password, correct_password) == 0) {
        printf("401655019 am\n");
    } else {
        printf("Access denied.\n");
    }
}