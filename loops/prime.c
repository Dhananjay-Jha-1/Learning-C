/*Write a program to check if a number is prime or not*/

#include <stdio.h>

int main(void)
{
    int number, count=0;

    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i++)
    {
        if (number % i == 0)
            count++;
    }
    if (count == 2)
        printf("The number is prime\n");
    else    
        printf("The prime is not prime\n");

    return 0;
}