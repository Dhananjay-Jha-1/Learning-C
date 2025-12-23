// Write a program to shift all zeroes in an array  to the end without changing the order of the array

#include <stdio.h>

int main (void)
{
    int n, i ,j = 0 , temp;

    printf("Enter the no of the elements in the array : ");
    scanf("%d", &n);

    int m = n;
    int arr[n];
    
    printf("Enter the elements in the array : ");
    for(int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    
    for(j = 0; j < n; j++)
    {
    for ( i = 0; i < n-1 ; i++)
    {   
        if (arr[i] == 0)
        {
            temp = arr[i+1];          
            arr[i+1] = arr[i];          
            arr[i] = temp;               
            
        }
    }
    }
    for (int i = 0; i < n ; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}
