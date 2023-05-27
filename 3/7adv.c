#include <stdio.h>
void read(int enuum[], float ein[], int en)
{
    for (int i = 0; i < en; i++)
    {
        printf("please enter employee number %d code\n:", i + 1);
        scanf("%d", &enuum[i]);
        printf("please enter employee number %d income\n:", i + 1);
        scanf("%f", &ein[i]);
    }
}
void calc(float ein[], float tax[], int en)
{
    for (int i = 0; i < en; i++)
    {
        if (ein[i] < 400000)
            tax[i] = 0;
        if (ein[i] > 400001 && ein[i] < 500000)
            tax[i] = ein[i] * 0.1;
        if (ein[i] > 500001 && ein[i] < 700000)
            tax[i] = ein[i] * 0.15;
        if (ein[i] > 700001)
            tax[i] = ein[i] * 0.17;
    }
}
void comp(float ein[], float tax[], float pure[], int en, int *maxnum)
{
    for (int i = 0; i < en; i++)
        pure[i] = ein[i] - tax[i];
    *maxnum = 0;
    for (int i = 0; i < en; i++)
    {
        if (pure[i] > pure[*maxnum])
        {
            *maxnum = i;
        }
        else
            continue;
    }
}
int main()
{
    int en, maxnum;
    printf("enter the number of the employee\n:");
    scanf("%d", &en);
    float tax[en], pure[en], eincome[en];
    int enumber[en];
    read(enumber, eincome, en);
    calc(eincome, tax, en);
    comp(eincome, tax, pure, en, &maxnum);
    for (int i = 0; i < en; i++)
    {
        printf("employee with code %d has income of %f\n", enumber[i], pure[i]);
    }
    printf("and employee with code %d has the highest pure income of %f\n", enumber[maxnum], pure[maxnum]);
}