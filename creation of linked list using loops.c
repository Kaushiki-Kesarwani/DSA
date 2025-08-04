#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int choice;
    struct node *head, *newnode, *temp = head;
    head = 0;
    printf("Do u want to continue(0,1)?:");
    scanf("%d", &choice);
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
    }
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }

    traverse(head);
}