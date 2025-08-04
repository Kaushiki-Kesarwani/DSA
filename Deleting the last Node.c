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
// Deleting the node at the end of the linked list
struct Node *deletion_in_lastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
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
    Head = deletion_in_lastNode(Head);
    linkedlistdata(Head);

    return 0;
}
