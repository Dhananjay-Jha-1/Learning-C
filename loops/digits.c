/* Calculating the number of digits in a number*/

// do while is better suited for this program as compared to while 
// do while ensures the loop is executed at least once 
// Since, 0 also contains 1 digit

#include <stdio.h>

int main(void)
{
    int n, digits=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do{
        n = n/10;
        digits++;
    }
    while(n!=0);

    printf("The number of digits in the number is/are %d\n", digits);

    return 0;
}

