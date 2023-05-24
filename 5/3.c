#include <stdio.h>
void bubble();
void pr();
void reg();
void swap();
int np;
int main()
{
    int n[1][4];
    reg(n);
    bubble(n,np);
}
void reg(int *n[])
{
    int i,j;
    for(i=0;i<1;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
}
void bubble(int arr[],int n )
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void pr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}