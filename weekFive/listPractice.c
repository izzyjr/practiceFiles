#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

node* createLinkedList(int n);

void displayList(node* head);

int manin(void)
{
    int n = 0;
    node* HEAD = NULL;
    printf("How many nodes?");
    scanf("%i", &n);
    HEAD = createLinkedList(n);
    displayList(HEAD);
    return 0;
}

node* createLinedList(int n)
{
    node* head = NULL;
    node* temp = NULL;
    node* iterate = NULL;

    for (int i = 0; i < n; i++)
    {
        temp = (node*)malloc(sizeof(node));
        printf("Enter the date for node number: %i", i + 1);
        scanf("%i", &(temp->data));
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            iterate = head;
            while(iterate->next != NULL)
            {
                iterate = iterate->next;
                iterate->next = temp;

            }
        }
    }
    return head;
}

void displayList(node* head)
{
    node* iterate = head;
    while(iterate != NULL)
    {
        printf("\t %i ->", iterate->data);
        iterate = iterate->next;
    }
}