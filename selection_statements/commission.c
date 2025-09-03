/***********************          When stocks are sold or purchased through a broker, the broker’s commission is
often computed using a sliding scale that depends upon the value of the stocks
traded. Let’s say that a broker charges the amounts shown in the following table:
Transaction size                         Commission rate
Under $2,500                              $30 + 1.7%
$2,500–$6,250                              $56 + 0.66%
$6,250–$20,000                          $76 + 0.34%
$20,000–$50,000                           $100 + 0.22%
$50,000–$500,000                           $155 + 0.11%
Over $500,000                              $255 + 0.09
The minimum charge is $39. Our program asks the user to enter the amount of
the trade, then displays the amount of the commission:          *************************/


#include <stdio.h>

int main(void)
{
    float trade_amount, commission;

    printf("Enter the transaction size of your trade amount : ");
    scanf("%f", &trade_amount);

    if (trade_amount < 2500)
        commission = 30.0 + (1.7/100.0 * trade_amount);
    else if (trade_amount >=2500 && trade_amount < 6250)
        commission = 56.0 + (0.66/100.0 * trade_amount);
    else if (trade_amount >= 6250 && trade_amount < 20000)
        commission = 76.0 + (0.34/100.0 * trade_amount);
    else if (trade_amount >=20000 && trade_amount < 50000)
        commission = 100.0 + (0,22/100.0 *trade_amount);
    else if (trade_amount >=50000 && trade_amount < 500000)
        commission = 155.0 + (0.11/100.0 *trade_amount);
    else    
        commission = 255.0 + (0.09/100.0 * trade_amount);
    
    if (commission < 39.0f)
        commission = 39.0f;

    printf("The amount of commission that needs to be paid is $%.2f\n", commission);
    printf("Total amount to be paid is $%.2f\n", trade_amount+commission);

}