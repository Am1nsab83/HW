#include <stdio.h>
int main()
{
    const long double mol=0.0000000000000000003; /* should be 23 but this is 18 */
    const int ltg=950;
    float e,eg;
    long int s;
    printf("please insert the water as L\n:");
    scanf("%f",e);
    eg=e*ltg;
    s=eg/mol*0.000001;
    printf("there are %d molcoles in this amount of water",s);
    return 0;
}