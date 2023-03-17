#include <stdio.h>
int main()
{
    const int m_m=750000;
    int totp_m,totf_m,totp_y,totf_y,m_m2,dif;
    printf("750000 for each\n");
    totp_m = m_m*2;
    printf("totaly %d rial for both in a month\n",totp_m);
    totp_y = totp_m*12;
    printf("which makes %d rial in year fo company\n",totp_y);
    m_m2 = (m_m*13.5/100)+m_m;
    printf("13.5%% more than their current salary will be %d rials\n",m_m2);
    totf_m=m_m2*2;
    printf("totaly %d rial for both in a month after change\n",totf_m);
    totf_y=totf_m*12;
    printf("which makes %d rial in year fo company afetr change\n",totp_y);
    dif = totf_y-totp_y;
    printf("\nnow the total cost for this change for the company will be %d rials per year.",dif);
    return 0;
}