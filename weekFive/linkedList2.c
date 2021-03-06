/*
 * C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void)
{
    typedef struct node
    {
        int num;
        struct node* ptr;
    }
    node;

    node* head = NULL;
    node* first = NULL;
    node* temp = NULL;
    int count = 0;
    int choice = 1;

    while (choice)
    {
        head = malloc(sizeof(node));
        printf("Enter the data item\n");
        scanf("%d", &head->num);
        if (first != NULL)
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

    temp = first;
    printf("\nStatus of the linked list is\n");
    while (temp != NULL)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp->ptr;
    }
    printf("NULL\n");
    printf("%d=>\n", first->num);
    printf("# of nodes in the list = %d\n", count);
}