#include <stdio.h>
void del();
int size;
int main()
{
    int i;
    printf("please enter the ammount of chars you want\n:");
    scanf("%d",&size);
    char a[size];
    for(i=0;i<size;i++)
        scanf(" %c",&a[i]);
    del(a);
    printf (" \n duplicateds are deleted: ");    
    for ( i = 0; i < size; i++)  
    {  
        printf ("\n %c \n", a[i]);  
    }  
    return 0; 
}
void del(char *arr)
{
    int i,j,k;
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( arr[i] == arr[j])  
            { 
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                } 
                size--;  
                j--;      
            }  
        }  
    }  
}