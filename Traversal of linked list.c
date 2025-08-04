#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversaloflinkedlist(struct Node *ptr)
{
    while (ptr != 0)
    {

        printf("elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Declaring pointers
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // linked list
    head->data = 9;
    head->next = second;

    second->data = 32;
    second->next = third;

    third->data = 96;
    third->next = fourth;

    fourth->data = 49;
    fourth->next = fifth;

    fifth->data = 22;
    fifth->next = NULL;

    Traversaloflinkedlist(head);
    printf("\n");
    return 0;
}
