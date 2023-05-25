#include <stdio.h>
void bubble(int arr[], int n) 
{
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void pra(int arr[], int size) 
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void read(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}
void merge(int arr1[], int n1, int arr2[], int n2, int ma[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) 
    {
        if (arr1[i] < arr2[j])
            ma[k++] = arr1[i++];
        else
            ma[k++] = arr2[j++];
    }

    while (i < n1)
        ma[k++] = arr1[i++];
    while (j < n2)
        ma[k++] = arr2[j++];
}

int main() 
{
    int arr1[5], arr2[5],mergea[10];
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("Enter 5 elements for the first array: ");
    read(arr1,n1);
    printf("Enter 5 elements for the second array: ");
    read(arr2,n2);
    bubble(arr1, n1);
    bubble(arr2, n2);
    printf("sorted first array\n:");
    pra(arr1, n1);
    printf("\nSorted second array\n:");
    pra(arr2, n2);
    merge(arr1, n1, arr2, n2, mergea);
    printf("\nMerged array\n:");
    pra(mergea, n1+n2);

    return 0;
}