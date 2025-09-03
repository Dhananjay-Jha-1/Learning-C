//convert a fahrenheit temperature to celsius

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenhiet scale: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0) * (fahrenheit - 32);

    printf("Celsius equivalent: %0.1f\n", celsius);

    return 0;
}