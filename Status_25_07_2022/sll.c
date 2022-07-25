#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} sll;

void insert(sll **head, int data);
void display(sll **head);
void reverse(sll **head);
int len(sll *);
void bubble_sort(sll **head);
void insertion_sort(sll **head);
void selection_sort(sll **head);

int main()
{
    sll *head = NULL;
    for (int i = 5; i > 0; i--)
    {
        insert(&head, i + 10);
    }
    display(&head);
    // reverse(&head);
    // bubble_sort(&head);
    //insertion_sort(&head);
    selection_sort(&head);
    display(&head);
}

void insert(sll **head, int data)
{
    sll *newnode = malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            sll *temp = *head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void display(sll **head)
{
    sll *temp = *head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void reverse(sll **head)
{
    if (*head != NULL)
    {
        sll *prev = NULL;
        sll *next = NULL;
        while (*head != NULL)
        {
            next = (*head)->link;
            (*head)->link = prev;
            prev = *head;
            *head = next;
        }
        *head = prev;
    }
}

int len(sll *temp)
{
    int length = 0;
    while (temp != NULL)
    {
        temp = temp->link;
        length++;
    }
    return length;
}

void bubble_sort(sll **head)
{
    int length = len(*head);
    sll *temp = *head;
    for (int i = 0; i < length - 1; i++)
    {
        temp = *head;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (temp->data > temp->link->data)
            {
                temp->data = temp->data ^ temp->link->data;
                temp->link->data = temp->data ^ temp->link->data;
                temp->data = temp->data ^ temp->link->data;
            }
            temp = temp->link;
        }
    }
}

void insertion_sort(sll **head)
{
    sll *unsorted = *head;
    sll *temp = *head;
    int length = 0;
    int dummy = 0;
    int key = 0;
    while (temp->link != NULL)
    {
        length++;
        key = temp->link->data;
        for (int j = length; j > 0; j--)
        {
            int k = j;
            unsorted = *head;
            while (--k)
            {
                unsorted = unsorted->link;
            }
            if (unsorted->data > key)
            {
                unsorted->link->data = unsorted->data;
            }
        }
        unsorted->data = key;
        temp = temp->link;
    }
}

sll *get_min(sll *head)
{
    sll *temp = head;
    sll *min = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
        if (min->data > temp->data)
        {
            min = temp;
        }
    }
    return min;
}

void selection_sort(sll **head)
{
    sll *temp = *head;
    sll *dummy = NULL;
    while (temp->link != NULL)
    {
        dummy = get_min(temp);
        if (dummy != temp)
        {
            dummy->data = dummy->data ^ temp->data;
            temp->data = dummy->data ^ temp->data;
            dummy->data = dummy->data ^ temp->data;
        }
        temp = temp->link;
    }
}
