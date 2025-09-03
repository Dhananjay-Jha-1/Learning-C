/* A program to check whether a number is prime or not */

#include <stdio.h>

int main(void)
{
    int number, i;

    printf("Enter a number : ");
    scanf("%d", &number);

    for(i=2; i < number; i++)
    {
        if (number % i == 0)
            break;
    }

    if (i == number)
        printf("The number is prime\n");
    else
        printf("The number is not prime as it is divisible by %d\n", i );

    return 0;
}