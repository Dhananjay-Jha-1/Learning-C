// 
#include <stdbool.h>
#include <stdio.h>

int main (void)
{
    int n,m;

    printf("Enter the no. of elements in an array : ");
    scanf("%d", &n);

    m=n;

    int arr[n];

   printf("Enter the elements in the array : ");
   for(int i = 0; i < n; i++)
   {
       scanf("%d", &arr[i]);
   }

   for(int i = 0; i < n-1; i++)
   { 
       bool isLeader = true;
      //int c=0;
       for(int j = i+1; j < n; j++)
       {
           if (arr[i] <= arr[j])
           {
               isLeader = false;
               break;
           }
       }
       if (isLeader)
        {
            printf("%d\t", arr[i]);
        }

            //m--;
   } printf("%d\n", arr[n-1]);
   return 0;
}
