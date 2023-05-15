#include <stdio.h>
float inp,cm,m;
void input();
void foot();
void inch();
void out();
int main()
{
    printf("welcome to the length converter!\nplease insert your value (foot & inch to m & cm):\n");
    input();
    return 0;
}
void input()
{
    scanf("%f",&inp);
    printf("please choose your input:\n1.foot\n2.inch\n");
    int ans;
    scanf("%d",&ans);
    if(ans == 1)
    {
        printf("you selected foot\n");
        foot();
    }
    if(ans == 2)
    {
        printf("you selected inch\n");
        inch();
    }
}
void foot()
{
    m=0.3048*inp;
    cm=m*100;
    out();
}
void inch()
{
    m=inp/2*0.3048;
    cm=m*100;
    out();
}
void out()
{
    printf("converted to m=%f\nconverted to cm=%f",m,cm);
}