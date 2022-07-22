#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}sll;

void insert(sll **head,int data);
void display(sll **head);
void reverse_link(sll **head);
void reverse_data(sll **head);
int len(sll **head);

int main()
{
    sll *head = NULL;
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,8);
    insert(&head,3);
    insert(&head,87);
    display(&head);
    reverse_link(&head);
    display(&head);
    reverse_data(&head);
    display(&head);
}

void insert(sll **head,int data)
{
    sll *newnode = malloc(sizeof(sll));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            newnode->link = *head;
            *head = newnode;
        }
    }
}

void display(sll **head)
{
    sll *temp = *head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void reverse_link(sll **head)
{
    if(*head == NULL)
    {
        printf("Can't reverse as there are no nodes\n");
    }
    else
    {
        sll *prev = NULL;
        sll *next = NULL;
        while(*head != NULL)
        {
            next = (*head)->link;
            (*head)->link = prev;
            prev = *head;
            *head = next;
        }
        *head = prev;
    }
}

void reverse_data(sll **head)
{
    if(*head == NULL)
    {
        printf("Can't reverse as there are no nodes\n");
    }
    else
    {
        int length = len(head);
        int dummy = 0;
        sll *first = *head;
        sll *last = *head;
        int limit = length/2;
        while(limit)
        {
            dummy = length--;
            last = *head;
            while(--dummy)
            {
                last = last->link;
            }
            first->data = first->data ^ last->data;
            last->data = first->data ^ last->data;
            first->data = first->data ^ last->data;

            limit--;
            first = first->link;
        }
    }

}

int len(sll **head)
{
    int length = 0;
    sll *temp = *head;
    while(temp != NULL)
    {
        temp = temp->link;
        length++;
    }
    return length;
}