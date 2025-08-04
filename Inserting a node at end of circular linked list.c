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
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head); // Loop until you come back to the head node
    printf("To check list is correctly circular the last node is head \n");
    printf("data = %d\n", ptr->data);
}
void insertionatend(struct node **head, int data, struct node **tail)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    (*tail)->next = newnode;
    newnode->next = *head;
    (*tail) = newnode;
}

int main()
{
    struct node *head, *newnode, *ptr;
    int data, create;
    head = 0;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data:");
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

        printf("do u want to continue(1for yes/0 for No):");
        scanf("%d", &create);
    } while (create);

    display(head);
    printf("\n");

    int newdata;
    printf("Enter data:");
    scanf("%d", &newdata);

    insertionatend(&head, newdata, &ptr);
    display(head);

    return 0;
}
