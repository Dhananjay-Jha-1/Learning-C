/************  Write a program that reads a message, then prints the reversal of the message:            *
Enter a message: Don't get mad, get even.                                                     *
Reversal is: .neve teg ,dam teg t'noD                                                         *
Hint: Read the message one character at a time (using getchar) and store the characters in    *
an array. Stop reading when the array is full or the character read is '\n'.                  *
(b) Revise the program to use a pointer instead of an integer to keep track of the current    *
position in the array.    *********************************************************************/

#include <stdio.h>
#define N 100

int main(void)
{
    char arr[N];
    int count = 0;
    char c;

printf("Enter your message : ");
    do
    {
        c = getchar();
        arr[count] = c;
        count++;

    }while (c != '\n');

    printf("Reversal is : ");
    for (int i = count; i >= 0; i--)
    {
        putchar( arr[i]);
    }
    printf("\n");
    return 0;
}
