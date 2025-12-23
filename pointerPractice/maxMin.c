//Finding the Largest and Smallest Elements in an Array

#include <stdio.h>

void read_array(int* a, int max_size);

void max_min (int* a, int max_size);

int main (void)
{
    int n;

    printf("Enter the no. of elements in an array : ");
    scanf("%d", &n);

    int arr[n];

    read_array (arr, n);
    
     max_min (arr, n);

     printf("\n");
}

void read_array (int* a, int max_size)
{
    int* start = a;

    for( int i = 0; i < max_size; i++)
    {
        scanf("%d", a);
        a++;
    }
}

void max_min (int* a, int max_size)
{
    int max, min;
    for (int i = 0; i < max_size-1 ; i++)
    {
        if (a[i+1] > a[i])
        {
            max = a[i+1];
        }
        if (a[i+1] < a[i])
        {
             min = a[i+1];
        }
    }
            printf ("Max = %d\n", max);
            printf ("Min = %d\n", min);
}
