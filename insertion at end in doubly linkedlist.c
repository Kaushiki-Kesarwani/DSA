#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("data = %d\n", p->data);
        p = p->next;
    }
}
void insertionatend(struct node **tail, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = *tail;
    (*tail)->next = newnode;
    newnode->next = NULL;
    *tail = newnode;
}
int main()
{
    struct node *head, *newnode, *tail;
    int choice;
    head = NULL;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        // ask the user if want to continue adding nodes
        printf("Do you want to add another node(1 for Yes/0 for No):");
        scanf("%d", &choice);
    } while (choice);

    display(head);
    printf("\n");
    int value;
    printf("Enter data for insertion:");
    scanf("%d", &value);
    insertionatend(&tail, value);

    display(head);

    return 0;
}
