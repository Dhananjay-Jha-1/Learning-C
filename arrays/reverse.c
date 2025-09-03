// Reversing a Series of Numbers
// Our first array program prompts the user to enter a series of numbers, then writes
// the numbers in reverse order:
// Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
// In reverse order: 31 50 11 23 94 7 102 49 82 34

#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 numbers : ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("In reverse order : ");
    for(int j = 9; j >= 0; j--)
    {
        printf(" %d", arr[j]);
    }
    printf("\n");
    return 0;
}