//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//You can return the answer in any order.

 

//Example 1:

//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


#include <stdio.h>

int main(void)
{
    int n, j, target;

    printf("Enter the number of elements in array nums : ");
    scanf("%d", &n);
    
    int nums[n];

    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element : ");
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++)
    {
       for ( j = i+1; j < n; j++)       // j = i+1  was with the help of AI , I was implementing j = 0
       {
           if (nums[i] + nums[j] == target )
           
           {
               printf("The indices are : %d and %d \n", i, j);
               return 0;                    //return 0 was with the help of AI, I was trying to exit but didn't think of the same 
           }
        }
    }
    return 0;
} 
