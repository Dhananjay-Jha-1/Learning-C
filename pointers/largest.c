// write a program to find the largest and smallest element in the array, 
// implement pointers and arrays

#include <stdio.h>

#define N 10

void compare(int a[], int n, int *max , int *min);

int main(void)
{
    int a[N], big, small;
    
    for(int i = 0 ; i < N; i ++)
    {
        scanf("%d", &a[i]);
    }
    compare(a, N, &big, &small); //the array name a decays into a pointer to its first element (&a[0]) when passed to a function.

    printf("Largest element -- %d\nSmallest element -- %d\n", big, small);
    
    return 0; //return 0
}

void compare(int a[], int n , int *max, int *min)
{
    *max = a[0];
    *min = *max;
    for (int i = 0 ; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}