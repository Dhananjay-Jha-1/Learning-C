#include <stdio.h>

int majorityElement(int* nums, int numsSize)
{
    int i = 0, freq = 0;
    for(i = 0; i < numsSize; i++)
    {
        freq = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
                freq++;
        }
        if(freq > numsSize/2)
            break;
    }
    return nums[i];
}

int main(void)
{
    int n;
    printf("Enter the length of an array : ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("%d", majorityElement(A, n));

    return 0;
}
    

