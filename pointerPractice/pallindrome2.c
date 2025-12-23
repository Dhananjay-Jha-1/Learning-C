// Write the pallindrome.c program using pointers

#include <stdio.h>
#define N 100

void read_message (char* arr, int max_size, int* length);
void reverse_message(char* arr ,char* reverse, int length);
int is_pallindrome (char* arr, char* reverse, int length);

int main (void)
{
    char arr[N], reverse[N];
    int count = 0;

    printf("Enter a message : ");
    read_message(arr, N, &count);

    reverse_message(arr, reverse, count);

    if(is_pallindrome(arr, reverse, count) == 0)
        printf("pallindrome\n");
    else
        printf("not pallindrome\n");
}

void read_message (char* p_arr, int max_size, int* length)
{
    char* ptr_c;
    ptr_c = p_arr;         // ptr_c now points to the 1st element of an array
    *length = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF && *length < max_size - 1)
    {
        *ptr_c = (char) c;
        ptr_c++ ;
        (*length)++ ;
    }
}

void reverse_message (char* arr, char* reverse, int length)
{
    char* ptr = reverse;           // ptr points to the 1st element of the reversed array

    for(int i = length - 1; i >= 0; i--)  
    {
        *ptr = arr[i];              // copies original array in reverse in reverse array
        ptr++ ;
    }        
}

int is_pallindrome (char* arr, char* reverse, int length)
{
    int value = 0;
    for(int i = 0; i < length; i++)
    {
        if( arr[i] == reverse[i])
            value++;
    }
    if (value == length)
        return 0;
    else
        return 1;
}
    
