// Determines the length of a message

#include <stdio.h>

int main(void)
{
    char ch;
    int length = 0;

    printf("Enter a message : ");
    ch = getchar();

    while(ch != '\n')
    {
        ch = getchar();
        length++;
    }
    
    printf("The message was %d characters long\n", length);

    return 0;
}