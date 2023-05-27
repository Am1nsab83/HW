#include <stdio.h>

int main()
{
    char color;
    printf("Enter the first letter of a color: ");
    scanf("%c", &color);
    if (color >= 'a' && color <= 'z')
    {
        color = color - 'a' + 'A';
    }
    switch (color)
    {
    case 'R':
        printf("Red\n");
        break;
    case 'O':
        printf("Orange\n");
        break;
    case 'Y':
        printf("Yellow\n");
        break;
    case 'G':
        printf("Green\n");
        break;
    case 'B':
        printf("Blue\n");
        break;
    case 'I':
        printf("Indigo\n");
        break;
    case 'V':
        printf("Violet\n");
        break;
    default:
        printf("Invalid input\n");
    }
    return 0;
}