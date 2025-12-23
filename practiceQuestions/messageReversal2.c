/*(a) Write a program that reads a message, then prints the reversal of the message:
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
Hint: Read the message one character at a time (using getchar) and store the characters in
an array. Stop reading when the array is full or the character read is '\n'.
(b) Revise the program to use a pointer instead of an integer to keep track of the current
position in the array.,,   use pointers***********************************************************************/

#include <stdio.h>
#define N 100

int main (void)
{
    char* pc;
    char arr[N];
    char character;
    int count = 0;

    pc = arr;

    printf("Enter a message : "); 
    do 
    {
        character = getchar();
        *pc = character;
        pc++;
        count++;
    }
    while(character != '\n');

    for(int i = count; i >= 0; i--)
    {
        putchar(*pc);
    }
    printf("\n");
    return 0;
}
