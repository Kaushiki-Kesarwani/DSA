#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode
{
    int data;
    struct SinglyLinkedListNode *next;
} SinglyLinkedListNode;

int getNode(SinglyLinkedListNode *llist, int PositionFromTail)
{
    SinglyLinkedListNode *currentnode = llist;
    SinglyLinkedListNode *nextnode = llist;

    for (int i = 0; i <= PositionFromTail; i++)
    {
        nextnode = nextnode->next;
    }

    while (nextnode != NULL)
    {
        currentnode = currentnode->next;
        nextnode = nextnode->next;
    }
    return currentnode->data;
}

int main()
{
    int t, n, val, indexval, indexnum;
    SinglyLinkedListNode *head = NULL, *tail = NULL;
    printf("Enter test cases:");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        printf("Enter number of elements:");
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {

            printf("Enter data:");
            scanf("%d", &val);
            SinglyLinkedListNode *newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
            newnode->data = val;
            newnode->next = 0;

            if (head == 0)
            {
                head = tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
        }
        printf("Enter position:");
        scanf("%d", &indexnum);
        indexval = getNode(head, indexnum);
        printf("%d\n", indexval);
    }
    return 0;
}