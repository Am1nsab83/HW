#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count[256] = {0};
    printf("Enter a string ending with '.': ");
    scanf("%[^.]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c occurs %d times\n", i, count[i]);
        }
    }
    return 0;
}