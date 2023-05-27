#include <stdio.h>
int main()
{
    char day;
    printf("please enter the number of the day\n:");
    scanf(" %c", &day);
    switch (day)
    {
    case '1':
        printf("\nsaturday");
        break;
    case '2':
        printf("\nsunday");
        break;
    case '3':
        printf("\nmonday");
        break;
    case '4':
        printf("\ntuesday");
        break;
    case '5':
        printf("\nwednesday");
        break;
    case '6':
        printf("\nthursday");
        break;
    case '7':
        printf("\nfriday");
        break;
    }
    return 0;
}