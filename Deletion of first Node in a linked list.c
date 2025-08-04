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
// Deletion at the beginning of the linked list
struct Node *Deletion_at_Beginning(struct Node *Head)
{
    struct Node *ptr = Head;
    Head = Head->next;
    free(ptr);
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

    printf("Deleted element is : %d\n", Head->data);

    printf("\n");
    printf("Nodes after Deletion\n");
    Head = Deletion_at_Beginning(Head);
    linkedlistdata(Head);

    return 0;
}
