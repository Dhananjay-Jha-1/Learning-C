// Write a program that tests whether two words are anagrams (permutations of the same let-
// ters):
// Enter first word: smartest
// Enter second word: mattress
// The words are anagrams.
// Enter first word: dumbest
// Enter second word: stumble
// The words are not anagrams

#include <stdio.h>

int main(void)
{
    int arr[26] = {0}, temp[26] = {0};
    char ch;

    printf("Enter first word : (0 to exit) ");
    for(;;)
    {
        if (ch == 0)
            break;
        else
        {
            scanf("%c", &ch);
            if(ch >= 65 && ch < 97)
                ch = ch + 32;
        }
    }
}