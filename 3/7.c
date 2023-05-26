#include <stdio.h>
int main()
{
    int en = 3;
    int enumber1, enumber2, enumber3;
    float eincome1, eincome2, eincome3;
    float tax1, tax2, tax3;
    float pure1, pure2, pure3;
    for(int i = 0; i < en; i++)
    {
        printf("please enter employee number %d code\n:", i + 1);
        if (i == 0) scanf("%d", &enumber1);
        if (i == 1) scanf("%d", &enumber2);
        if (i == 2) scanf("%d", &enumber3);

        printf("please enter employee number %d income\n:", i + 1);
        if (i == 0) scanf("%f", &eincome1);
        if (i == 1) scanf("%f", &eincome2);
        if (i == 2) scanf("%f", &eincome3);
    }
    for(int i = 0; i < en; i++)
    {
        if (i == 0)
        {
            if(eincome1 < 400000)
                tax1 = 0;
            if(eincome1 > 400001 && eincome1 < 500000)
                tax1 = eincome1 * 0.1;
            if(eincome1 > 500001 && eincome1 < 700000)
                tax1 = eincome1 * 0.15;
            if(eincome1 > 700001)
                tax1 = eincome1 * 0.17;
        }
        if (i == 1)
        {
            if(eincome2 < 400000)
                tax2 = 0;
            if(eincome2 > 400001 && eincome2 < 500000)
                tax2 = eincome2 * 0.1;
            if(eincome2 > 500001 && eincome2 < 700000)
                tax2 = eincome2 * 0.15;
            if(eincome2 > 700001)
                tax2 = eincome2 * 0.17;
        }
        if (i == 2)
        {
            if(eincome3 < 400000)
                tax3 = 0;
            if(eincome3 > 400001 && eincome3 < 500000)
                tax3 = eincome3 * 0.1;
            if(eincome3 > 500001 && eincome3 < 700000)
                tax3 = eincome3 * 0.15;
            if(eincome3 > 700001)
                tax3 = eincome3 * 0.17;
        }
    }
    pure1 = eincome1 - tax1;
    pure2 = eincome2 - tax2;
    pure3 = eincome3 - tax3;
    int maxnum = -1;
    for(int i=0;i<en;i++)
    {
        float current_pure_income;
        if(i == 0) current_pure_income = pure1;
        if(i == 1) current_pure_income = pure2;
        if(i == 2) current_pure_income = pure3;
        printf("employee with code %d has income of %f\n", i + enumber1 - maxnum, current_pure_income);
        float max_pure_income;
        if(maxnum == -1) max_pure_income = current_pure_income;
        if(maxnum == -1) maxnum = i + enumber1 - maxnum;
        else
        {
            if(i == maxnum) 
                max_pure_income = current_pure_income;
            else
            {
                if(current_pure_income > max_pure_income)
                {
                    maxnum=i + enumber1 - maxnum;
                    max_pure_income=current_pure_income;
                }
            }
        }
    }
    printf("and employee with code %d has the highest pure income of %f\n", maxnum, maxnum==enumber1?pure1:maxnum==enumber2?pure2:pure3);
}

// this code is very basic because its for season 3 of the book, for more advanced code please check 7adv.c