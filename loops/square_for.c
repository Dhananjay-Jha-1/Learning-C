/* Printing a table of squares using for loop */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number ");
    scanf("%d", &n);

    printf("This program prints the table of squares\n");
    for (int i = 1; i<=n; i++){
        printf("%d            %d\n", i, i*i);
    }
    return 0;

}
