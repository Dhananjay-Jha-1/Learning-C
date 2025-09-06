 // Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
// column sums:
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totals: 30 27 40 36 28
// Column totals: 34 37 37 32 21

#include <stdio.h>

#define ROW_SIZE 5
#define COLUMN_SIZE 5

int main(void)
{
    int arr[ROW_SIZE][COLUMN_SIZE];
    int sum_row[ROW_SIZE] = {0}, sum_column[COLUMN_SIZE] = {0};

    for(int row = 0; row < 5; row++)
    {
        printf("Enter Row %d : ", row + 1);
        for(int column = 0; column < 5; column ++)
        {
            scanf("%d", &arr[row][column]);
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sum_row[i] += arr[i][j];
            sum_column[j] += arr[i][j];
        }
    }
    printf("Row total : \t");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", sum_row[i]);
    }
    printf("\nColumn total : \t");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", sum_column[i]);
    }
    printf("\n");
    return 0;
}