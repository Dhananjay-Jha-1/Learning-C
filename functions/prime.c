//Test whether a number is prime or not 

#include <stdio.h>

int get_number()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    return n;
}
int check_prime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count ++;
    }
    if (count == 2)
        return 1;
    else
        return 111;
}

void display_prime(int n)
{
    int var = check_prime(n);
    if (var == 1)
        printf("The number is prime\n");
    else    
        printf("The number is not prime\n");
}

int main(void)
{
    int num = get_number();
    
    display_prime(num);
    return 0;
    
}