/*
 * C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void)
{
    struct node
    {
        int num;
        struct node* ptr;
    };
    typedef struct node NODE;

    NODE* head = NULL;
    NODE* first = NULL;
    NODE* temp = NULL;
    int count = 0;
    int choice = 1;
    first = 0;

    while (choice)
    {
        head  = malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            temp = head;
            first = temp;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);

    }
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\nStatus of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("# of nodes in the list = %d\n", count);
}