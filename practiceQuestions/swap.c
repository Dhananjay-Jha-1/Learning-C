#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;
    
    printf("a = %d \t b = %d\n",a, b); 

    a = a ^ b;
    b = b ^ a;
    a = b ^ a;   

    printf("a = %d \t b = %d\n", a, b );
}
