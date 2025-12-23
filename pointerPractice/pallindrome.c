//Write a program that reads a message, then checks whether it’s a palindrome (the letters
//in the message are the same from left to right as from right to left):
//Enter a message: He lived as a devil, eh?
//Palindrome
//Enter a message: Madam, I am Adam.
//Not a palindrome

#include <stdio.h>
#define N 100

int main(void)
{
    int c;
    char arr[N], reverse[N];
    int count = 0, index = 0, copy = 0;

    printf("Enter a message : ");
    while ((c = getchar()) != '\n' && c != EOF &&  count != N-1 )
    {
        arr[count] = (char) c;
        count++;
    }
    for (int i = count-1; i >= 0; i--)
    {
        reverse[index] = arr[i];
        index++;
    }
    for(int i = 0; i < count; i++)
    {
        if (arr[i] == reverse[i])
            copy++;
    }
    if (copy == count)
        printf("pallindrome\n");
    else
        printf("not pallindrome\n");

    return 0;
}
