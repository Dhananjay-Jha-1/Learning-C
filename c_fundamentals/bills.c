/*********Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay         
**    that amount using the smallest number of $20, $10, $5, and $1 bills:
**    Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3                                 ***********************************/


#include <stdio.h>

int main(void)
{
    int amount, bills20, bills10, bills5, bills1;

    printf("Enter a dollar amount : ");
    scanf("%d", &amount);

    bills20 = amount/20;
    amount = amount - bills20 * 20;                   // amount = amount % 20,  this also works 

    bills10 = amount/10;
    amount = amount - bills10 * 10;

    bills5 = amount/5;
    amount = amount - bills5 * 5;

    bills1 = amount/1;
    
    printf("$20 bills : %d\n$10 bills : %d\n$5 bills : %d\n$1 bills : %d\n ", bills20, bills10, bills5, bills1);
    return 0;

}