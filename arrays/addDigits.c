//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
//
//Example 1:
//
//Input: num = 38
//Output: 2
//Explanation: The process is
//38 --> 3 + 8 --> 11
//11 --> 1 + 1 --> 2 
//Since 2 has only one digit, return it.

#include <stdio.h>

int addDigits(int num);

int main(void)
{
    int number;
    
    printf("Enter a number : ");
    scanf("%d", &number);

    addDigits(number);

    return 0;
}

int addDigits(int num)
{
    int sum = 0, sum_of_digits = 0;
    
     while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    int temp = sum;
    if (sum > 9)
    {
        while( sum > 0)
        {
            int digits = sum % 10;
            sum_of_digits += digits;
            sum = sum / 10;
        }

    printf("Sum of digits repeatedly is %d\n : ", sum_of_digits);
    }
    else
        printf("Sum of digits repeatedly is %d\n : ", temp);
}



