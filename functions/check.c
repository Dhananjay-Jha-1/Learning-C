// Write a function check(x, y, n) that returns 1 if both x and y fall between 0 and n – 1,
// inclusive. The function should return 0 otherwise. Assume that x, y, and n are all of type int 

#include <stdio.h>

int check (int x, int y, int n);

int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int x , y;
    printf("Enter the value for x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    int result = check (x, y, n);
    printf("result : %d\n", result);
    return 0;
}

int check (int x, int y, int n)
{
    if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
        return 1;
    else 
        return 0;
}