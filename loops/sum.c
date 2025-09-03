/*Program to print the sum of the integers */

#include <stdio.h>

int main(void)
{
    int n, sum=0;
    printf("This program prints the sum of the integers entered\n");

    printf("Enter an integer (0 to terminate)");
    scanf("%d", &n);

    while(n!=0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum of the integers are %d\n", sum);

    return 0;
}