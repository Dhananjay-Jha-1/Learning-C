/*** You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the array follows the given conditions:

    Every consecutive pair of integers have opposite signs.
    For all integers with the same sign, the order in which they were present in nums is preserved.
    The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
***/
 

#include <stdio.h>



int main(void)
{
    int n;
    printf("Enter an even no. of array : ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    //1st elements must be +ve
    //every consecutive pair must be opposite sign
    //order must be preserved

    //rough roadmap, -- find 1st positive number
    int newArr[n];
    //initializing just for safety
    /*
    for(int i = 0; i < n; i++)
    {
        newArr[i] = 0;
    }
    */
    /*
    for(int i = 0; i < n; i++)
    {
        if(A[i] > 0)
        {
            newArr[0] = A[i];
            break;
        }
    }*/

    // now 1st element in newArr is filled with +ve number
    // gotta fill rest of the elements with -ve then +ve , i.e. , newArr[1] = -ve
    int j = 0;  
    for(int i = 0; i < n; i++)
    {
        if(A[i] > 0 && j % 2 == 0)
        {
            newArr[j] = A[i];
            j++;
        }
        else if(A[i] < 0 && j % 2 != 0)
        {   
            newArr[j] = A[i];
            j++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", newArr[i]);
    }
}
