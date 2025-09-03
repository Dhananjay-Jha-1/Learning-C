/*********      Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71        ***************/


#include <stdio.h>

int main(void)
{
    float amount, interest_rate, monthly_payment, monthly_rate_interest, balance_first_month, balance_second_month, balance_third_month;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter the rate of interest: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_rate_interest = interest_rate/12.0;

    balance_first_month = amount + (monthly_rate_interest/100 * amount) - monthly_payment;
    balance_second_month = balance_first_month + (monthly_rate_interest/100 * balance_first_month) - monthly_payment;
    balance_third_month = balance_second_month + (monthly_rate_interest/100 * balance_second_month) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", balance_first_month);
    printf("Balance remaining after second payment: %.2f\n", balance_second_month);
    printf("Balance remaining after third payment: %.2f\n", balance_third_month);

    return 0;
}
