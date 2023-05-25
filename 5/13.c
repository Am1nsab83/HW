#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int sum = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}