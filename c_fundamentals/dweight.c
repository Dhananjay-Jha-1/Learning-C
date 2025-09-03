//calculate the dimensional weight of a 12" x 10" x 8"

#include <stdio.h>
#define INCHES_PER_ROUND 166

int main()
{
    int length, breadth, height, volume, dweight;
    printf("Enter the value of length: ");
    scanf("%d", &length);
    printf("Enter the value of breadth: ");
    scanf("%d", &breadth);
    printf("Enter the value of height: ");
    scanf("%d", &height);

    volume = length*breadth*height;
    dweight = volume/INCHES_PER_ROUND + 1;

    printf("The dimensions are %d X %d X %d\n", length, breadth, height);
    printf("Volume : %d\n",volume);
    printf("Dimensional weight : %d\n", dweight);
    return 0;
}