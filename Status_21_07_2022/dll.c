//Sorting doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}dll;

void insert(dll **head,int data);
void display(dll **head);
int len(dll **head);
void bubble_sort(dll **head);


int main()
{
    dll *head = NULL;
    insert(&head,5);
    insert(&head,9);
    insert(&head,98);
    display(&head);
    bubble_sort(&head);
    display(&head);
}

void insert(dll **head,int data)
{
    dll *newnode = malloc(sizeof(dll));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->prev = NULL;
        newnode->next = NULL;
        newnode->data = data;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            newnode->next = *head;
            (*head)->prev = newnode;
            *head = newnode;
        }
    }
}


void display(dll **head)
{
    if(*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        dll *temp = *head;
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

int len(dll **head)
{
    dll *temp = *head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void bubble_sort(dll **head)
{
    int length = len(head);
    dll *temp = *head;
    int rand = 0;
    for(int i=0;i<length-1;i++)
    {
        rand = i;
        temp = *head;
        while(rand--)
        {
            temp = temp->next;
        }
        for(int j=0;j<length-i-1;j++)
        {
            if((temp->data > temp->next->data))
            {
                
                temp->data = temp->data ^ temp->next->data;
                temp->next->data = temp->data ^ temp->next->data;
                temp->data = temp->data ^ temp->next->data;
            }
            temp = temp->next;
        }
    }
}

