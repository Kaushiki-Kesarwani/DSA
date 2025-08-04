#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} node;

void Display(node *p)
{
    while (p != NULL)
    {
        printf("data = %d\n", p->data);
        p = p->next;
    }
}

void Insertion_in_between(node **head, int index, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    node *ptr = *head;
    int i = 0;
    while (i != index - 1 && ptr != NULL)
    {
        ptr = ptr->next;
        i++;
    }

    // If ptr is NULL, the index is out of bounds
    if (ptr == NULL)
    {
        printf("Index out of bounds. No insertion performed.\n");
        free(newnode);
        return;
    }

    // Assign data to the new node
    newnode->data = data;

    // Link the new node with the next node
    newnode->prev = ptr;
    newnode->next = ptr->next;

    // If there's a next node, adjust its previous pointer
    if (ptr->next != NULL)
    {
        ptr->next->prev = newnode;
    }

    // Link the new node to the previous node
    ptr->next = newnode;
}

int main()
{
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;
    struct Node *Fifth;

    // Memory allocation dynamically using malloc function
    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link the Nodes
    Head->data = 5;
    Head->next = Second;

    Second->data = 12;
    Second->next = Third;

    Third->data = 32;
    Third->next = Fourth;

    Fourth->data = 54;
    Fourth->next = Fifth;

    Fifth->data = 87;
    Fifth->next = NULL;

    // calling function
    printf("Linked List before insertion.\n");
    Display(Head);
    printf("\n");
    printf("Linked List After insertion.\n");
    Insertion_in_between(&Head, 5, 14);
    Display(Head);
    return 0;
}