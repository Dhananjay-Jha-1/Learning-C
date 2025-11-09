// writing the same decompose program using pointers

#include <stdio.h>

double input(void);
void decompose(double num, int *int_part, double *frac_part);

int main(void)
{
    int integer_part;
    double number, fractional_part;

    number = input();
    decompose(number, &integer_part, &fractional_part);

    printf("%lf is divided into 2 parts -- integer part is %d and fractional part is %lf\n", number, integer_part, fractional_part);

}

double input(void)
{
    double num;

    printf("Enter a number : ");
    scanf("%lf", &num);

    return num;
}

void decompose(double num, int *int_part, double *frac_part)
{
    *int_part = (int) num;
    *frac_part = num - *int_part;
}