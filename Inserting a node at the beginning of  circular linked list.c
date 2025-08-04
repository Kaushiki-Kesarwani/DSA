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
    printf("To check the list is correctly circular the last node is head \n");
    printf("data = %d\n", ptr->data);
}

// Insertion At beginning
void insertionAtbeginning(struct node **head, int data, struct node **tail)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = *head;
    }
    else
    {
        newnode->next = *head;
        (*head) = newnode;
        (*tail)->next = newnode;
    }
}

// Insertion At end
void insertionAtend(struct node **head, int data, struct node **tail)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = *head;
    }
    else
    {
        newnode->next = *head;
        (*tail)->next = newnode;
        (*tail) = newnode;
    }
}

// Count length
int getlength(struct node *tail)
{
    struct node *temp = tail->next;
    int length_count = 0;

    do
    {
        length_count++;
        temp = temp->next;
    } while (temp != tail->next);

    return length_count;
}

// Insertion At any position
void Insertionatanyposition(struct node **head, int data, int position, struct node **tail)
{
    int length;
    struct node *ptr;
    struct node *newnode;

    length = getlength(*tail);
    if (position < 1 || position > length)
    {
        printf("Invalid position!");
    }
    else if (position == 1)
    {
        insertionAtbeginning(&(*head), data, &(*tail));
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        ptr = *head;
        int i = 1;
        while (i != position - 1)
        {
            ptr = ptr->next;
            i++;
        }
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}

int main()
{
    struct node *head, *newnode, *tail;
    int newdata, create, pos;
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
            tail = head;
        }
        else
        {

            tail->next = newnode;
            tail = newnode;
        }
        tail->next = head;

        printf("do u want to continue(1for yes/0 for No):");
        scanf("%d", &create);
    } while (create);
    printf("Before insertion:\n");
    display(head);
    printf("\n");

    printf("Enter data:");
    scanf("%d", &newdata);
    printf("\n");

    printf("After insertion at beginning:\n");
    insertionAtbeginning(&head, newdata, &tail);
    display(head);

    printf("After insertion at End:\n");
    insertionAtend(&head, newdata, &tail);
    display(head);

    printf("Enter position:");
    scanf("%d", &pos);

    printf("After insertion at any psition:\n");
    Insertionatanyposition(&head, newdata, pos, &tail);
    display(head);

    return 0;
}