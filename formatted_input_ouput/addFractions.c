/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2,result;

    
    printf("Enter the first fraction : ");
    scanf("%d%d", &num1, &denom1);
    printf("Enter the second fraction : ");
    scanf("%d %d", &num2, &denom2);

    result = num1 * denom2 + num2 * denom1;
    printf("The sum of the fractions are %d/%d\n", result, denom1*denom2);

    return 0;
}