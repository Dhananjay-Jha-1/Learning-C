/* Write a program that reverses the words in a sentence:
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
 */

#include <stdio.h>
#define N 200
void read_sentence ( char* ptr_original, int max_size, int* length);

void reverse_sentence (char* ptr_original, char* ptr_reverse, int length);

int main (void)
{
    char arr[N], reverse[N];
    int count = 0;

    printf("Enter a sentence : ");
    read_sentence ( arr, N, &count);

    reverse_sentence (arr, reverse, count);

    printf("\n");

    return 0;
}

void read_sentence ( char* ptr_original, int max_size, int* length)
{
    int c;
    
    *ptr_original = ' ';
    ptr_original += 1;
    (*length) += 1;

    while ((c = getchar()) != '\n' && c != EOF && *length < max_size - 1)
    {
        *ptr_original = (char) c;
        ptr_original++;
        (*length)++;
    }
}

void reverse_sentence (char* ptr_original, char* ptr_reverse, int length)
{
    int index = 0, j;
    for (int i = length-1 ; i >= 0; i--)
    {
        if ( ptr_original[i] == ' ')
        {
            j = i+1;
            while (ptr_original[j] != ' ' && i < length-1)
            {
                ptr_reverse[index] = ptr_original[j];
                index++;
                j++;

                if (j >= length)
                    break;
            }
            ptr_reverse[index] = ' ';
            index += 1;
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", *(ptr_reverse + i));
    }
}

