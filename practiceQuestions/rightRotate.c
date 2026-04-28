#include <stdio.h>

void rotate(int* nums, int numsSize, int k)
{
    k = k % numsSize;
    if(k == 0)
        return;

    int nums_copy[numsSize];
    int index = numsSize - k;
    int j = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(index < numsSize)
        {
            nums_copy[i] = nums[index];
            index++;
        }
        else
        {
            nums_copy[i] = nums[j];
            j++;
        }
    }
    for(int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums_copy[i]);
    }
}

int main(void)
{
    int numsSize;
    printf("Enter size : ");
    scanf("%d", &numsSize);

    int nums[numsSize];
    for(int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int k;
    printf("factor by which right rotate : ");
    scanf("%d", &k);

    rotate(&nums[0], numsSize, k);
}
    






