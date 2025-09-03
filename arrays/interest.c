// Our next program prints a table showing the value of $100 invested at different
// rates of interest over a period of years. The user will enter an interest rate and the
// number of years the money will be invested. The table will show the value of the
// money at one-year intervals—at that interest rate and the next four higher rates—
// assuming that interest is compounded once a year. Here’s what a session with the
// program will look like:
// Enter interest rate: 6
// Enter number of years: 5

#include <stdio.h>
#include <math.h>

#define INITIAL_BALANCE 100.00

int main(void)
{
    int no_of_years;
    float rate_of_interest;
    double amount;
    
    printf("Enter the rate of interest : ");
    scanf("%f", &rate_of_interest);
    printf("Enter number of years : ");
    scanf("%d", &no_of_years);

    printf("\nYEARS\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%0.2f%%\t", rate_of_interest + i);
    }
    printf("\n-----------------------------------------------\n");
    for(int i = 1; i <= no_of_years; i++)
    {
        printf("%d\t", i);
        for(int j = 0; j < 5; j++)
        {
            float current_rate = rate_of_interest + j;
            amount = INITIAL_BALANCE * pow(1 + current_rate/100.0, i);
            printf("%0.2lf\t", amount);
        }
        printf("\n");
    }
    return 0;
}

//had to use compound interest formula