#include <stdio.h>

int main() {
    int code1, code2, code3, code4, code5;
    int score1, score2, score3, score4, score5;
    int max = 0;
    int second_max = 0;
    int second_max_code;
    printf("Enter student 1 code and score: ");
    scanf("%d %d", &code1, &score1);
    printf("Enter student 2 code and score: ");
    scanf("%d %d", &code2, &score2);
    printf("Enter student 3 code and score: ");
    scanf("%d %d", &code3, &score3);
    printf("Enter student 4 code and score: ");
    scanf("%d %d", &code4, &score4);
    printf("Enter student 5 code and score: ");
    scanf("%d %d", &code5, &score5);
    if (score1 > max) 
    {
        second_max = max;
        max = score1;
        second_max_code = code1;
    } 
    else if (score1 > second_max) 
    {
        second_max = score1;
        second_max_code = code1;
    }
    if (score2 > max) 
    {
        second_max = max;
        max = score2;
        second_max_code = code2;
    } 
    else 
        if (score2 > second_max) 
        {
            second_max = score2;
            second_max_code = code2;
        }

    if (score3 > max) 
    {
        second_max = max;
        max = score3;
        second_max_code = code3;
    } 
    else 
        if (score3 > second_max) 
        {
            second_max = score3;
            second_max_code = code3;
        }

    if (score4 > max) 
    {
        second_max = max;
        max = score4;
        second_max_code = code4;
    } 
    else 
        if (score4 > second_max) 
        {
            second_max = score4;
            second_max_code = code4;
        }

    if (score5 > max) 
    {
        second_max = max;
        max = score5;
        second_max_code = code5;
    } 
    else 
        if (score5 > second_max) 
        {
        second_max = score5;
        second_max_code = code5;
        }

    printf("The student with the second highest score is %d with a score of %d\n", second_max_code, second_max);

    return 0;
}
