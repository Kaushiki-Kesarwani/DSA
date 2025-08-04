#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// Traversal of linked list
void linkedlistdata(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// Deleting a node in between of the linked list
struct Node *deletion_in_between(struct Node *Head, int index)
{
    struct Node *p = Head;
    struct Node *q = p->next;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return Head;
}

int main()
{
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;
    struct Node *Fifth;
    struct Node *Sixth;
    struct Node *Seventh;

    // Dynamically memory allocation
    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Fifth = (struct Node *)malloc(sizeof(struct Node));
    Sixth = (struct Node *)malloc(sizeof(struct Node));
    Seventh = (struct Node *)malloc(sizeof(struct Node));

    // link the nodes
    Head->data = 11;
    Head->next = Second;

    Second->data = 42;
    Second->next = Third;

    Third->data = 73;
    Third->next = Fourth;

    Fourth->data = 94;
    Fourth->next = Fifth;

    Fifth->data = 85;
    Fifth->next = Sixth;

    Sixth->data = 28;
    Sixth->next = Seventh;

    Seventh->data = 54;
    Seventh->next = NULL;

    // calling function
    printf("Nodes Before Deletion\n");
    linkedlistdata(Head);
    printf("\n");

    printf("Nodes after Deletion\n");
    Head = deletion_in_between(Head, 2);
    linkedlistdata(Head);

    return 0;
}
