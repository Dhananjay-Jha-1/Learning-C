// Write a program to sort an array


#include <stdio.h>

int main(void)
{
    int n, iteration = 0;

    printf("Enter the no. of elements in array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in the array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int j = 0; j < n; j ++)
    {
    for (int i = 0; i < n-1; i++)    // i < n - 1 was with the help of AI, it was obvious because did not manage to implement it on my own, was doing i < n 
    {
       
        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];            
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    }
    printf("The sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
