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
struct node *insertion(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;
    head->prev = ptr;
    head = ptr;

    return head;
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
    printf("\n");
    int value;
    printf("Enter data for insertion:");
    scanf("%d", &value);
    head = insertion(head, value);
    display(head);

    return 0;
}
