// Circular linked list creation and display
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// display the list
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *ptr = head;
    do
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head); // Loop until you come back to the head node
    printf("To check the list is correctly circular the last node next is head.\n");
    printf("Data = %d\n", ptr->data);
}

int main()
{
    struct node *head, *newnode, *ptr;
    int data, create;
    head = 0;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            ptr = head;
        }
        else
        {

            ptr->next = newnode;
            ptr = newnode;
        }
        ptr->next = head;

        printf("do you want to continue(1for yes/0 for No):");
        scanf("%d", &create);
    } while (create);

    display(head);

    return 0;
}
