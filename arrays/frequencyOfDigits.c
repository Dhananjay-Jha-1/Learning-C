// Write a C program that checks whether a number has any two digits that appear exactly the same number of times.

// Example 1: 122333
// Digit 2 appears 2 times
// Digit 3 appears 3 times
// Digit 1 appears 1 time
// → No two digits appear the same number of times → print "No same frequency"

// Example 2: 112233
// Digit 1 appears 2 times
// Digit 2 appears 2 times
// Digit 3 appears 2 times
// → Digits have the same frequency → print "Same frequency found"

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int count[10] = {0};   //keeps count of digits 0-9  in a number 
    long n;
    int digit;

    printf("Enter a number : ");
    scanf("%ld", &n);

    while (n>0)
    {
        digit = n % 10;
        count[digit]++;
        n = n/10;
    }
    for(int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
            printf("Digit %d has been repeated %d times\n", i, count[i]);
    }
}