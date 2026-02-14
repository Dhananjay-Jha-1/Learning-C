#include <stdio.h>

int main(void)
{
    int x = 8; // the memory manager allocates 4 bytes of memory to x

    char* ptr_x =(char*) &x; // ptr_x points to the 1st byte of x which is 00000000 00000000 00000000 00001000

    //I want to have some different number other than 8

    *(ptr_x+2) = 1;

    int y = *ptr_x;

    printf("%d %d\n", x, y);

    return 0;
}

