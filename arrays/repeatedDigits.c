// Checking a Number for Repeated Digits
// Our next program checks whether any of the digits in a number appear more than
// once. After the user enters a number, the program prints either Repeated digit
// or No repeated digit:
// Enter a number: 28212
// Repeated digit

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int checking[10] = {0};
    int n, digit;
    bool repeated;

    printf("Enter a number : ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        
        if(checking[digit] == 1)
        {
            repeated = true;
            break;
        }
        checking[digit] = 1;
        n = n/10;
    }
    if (repeated)
        printf("The number has repeated digits\n");
    else
        printf("The number does not have repeated digits\n");

    return 0;
}