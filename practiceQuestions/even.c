/**Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
**/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements in the array " );
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int count = 0, count_even = 0;
    for(int i = 0; i < n; i++)
    {
        int temp = A[i];
        while(temp > 0)
        {
            temp = temp / 10;
            count++;
        }
        if(count % 2 == 0)
            count_even++;
        count = 0;
    }
    printf("%d ", count_even);
}
