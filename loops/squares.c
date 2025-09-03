/* Prints a table of sqaures using while loop */

#include <stdio.h>

int main(void)
{
    int n, i=1;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("This program prints a table of squares\n");
    while(i <= n)
    {
        printf("%d       %d\n", i, i * i);
        i++;
    }
    return 0;
}