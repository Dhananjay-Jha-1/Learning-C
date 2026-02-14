#include <stdio.h>
#include <stdlib.h>

// The node structure has two fields : 1) Data field, 2) pointer to the next node field
struct Node
{
  int data;              
  struct Node* next;
};

struct Node* head;

void Insert(int num);
void Print();

int main(void)
{
    head = NULL; //empty list

    //Now, we want to insert the numbers in the linked list which will be given by the user

    int n, num;

    printf("Enter the number of elements in the list : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &num);

        // we will create a INSERT() function to insert the elements in the linked list
        Insert(num);
        //we will create a PRINT() function to print the elements of the linked list
        Print();
    }
}

void Insert(int num)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp -> num;                                 // (*temp).data = x
    
}
 











