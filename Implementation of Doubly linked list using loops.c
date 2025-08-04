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
int main()
{
    struct node *head, *newnode, *temp;
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
            temp = head;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        // ask the user if want to continue adding nodes
        printf("Do you want to add another node(1 for Yes/0 for No):");
        scanf("%d", &choice);
    } while (choice);

    display(head);

    return 0;
}
