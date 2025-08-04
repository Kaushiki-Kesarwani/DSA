#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistdata(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// Insertion at the beginning
struct Node *beginninginsertion(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Dynamically memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // link the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    // calling function
    printf("Nodes Before insertion\n");
    linkedlistdata(head);

    printf("\n");
    printf("Nodes after insertion\n");
    head = beginninginsertion(head, 6);
    linkedlistdata(head);

    return 0;
}
