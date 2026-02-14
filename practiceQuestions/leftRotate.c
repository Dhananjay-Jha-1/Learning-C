/*Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

Example 1

Input: nums = [1, 2, 3, 4, 5, 6], k = 2

Output: nums = [3, 4, 5, 6, 1, 2]

Explanation:

rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
*************************************************************************************/

#include <stdio.h>

int main(void)
{
    int n, k, j=0;

    printf("Enter the no. of elements in an array : ");
    scanf("%d", &n);

    int arr[n], arr1[n];

    printf("Enter the elements in an array : ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the factor the array should be rotated left by:  ");
    scanf("%d", &k);
    
    for(int i = 0; i < n; i++)
    {
        if( k < n)
        {
            arr1[i] = arr[k];
        } 
        else
        {
           arr1[i] = arr[j];
           j++;
       }
       k++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
