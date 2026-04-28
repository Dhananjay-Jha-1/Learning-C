/**Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.

 

Example 1:

Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    
***/

#include <stdio.h>

int countEven(int num);

int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d ",countEven(n));

    return 0;
}

int countEven(int num)
{
    int sum = 0, count_even = 0, digits;
    for(int i = 1; i <= num; i++)
    {
        int temp = i;
        while(temp > 0)
        {
            digits = temp % 10;   //343%10 = 3    //4%10 = 4 // digit = 30%10 = 0 //digit = 3%10 = 3
            sum += digits;
            temp = temp / 10;   //343/10 = 34   //temp = 30/10 = 3
        }
        if(sum % 2 == 0)
            count_even++;
        
        sum = 0;
    }
    return count_even;
}
