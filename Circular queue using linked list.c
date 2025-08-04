#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void Enqueue(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void Dequeue()
{

    struct node *ptr = front;
    if (front == 0 && rear == 0)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = NULL;
        free(ptr);
    }
    else
    {
        printf("Deleted data : %d\n", front->data);
        front = front->next;
        rear->next = front;
        free(ptr);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("peek : %d\n", front->data);
    }
}

void display()
{
    struct node *ptr = front;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        do
        {
            printf("data : %d\n", ptr->data);
            ptr = ptr->next;

        } while (ptr != front);
    }
}
int main()
{
    int Continue, data;
    printf("1.Enqueue\n2.Dequeue\n3.peek\n4.display\n");

    do
    {
        printf("Enter choice:");
        scanf("%d", &Continue);

        switch (Continue)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            Enqueue(data);
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("Invalid choice! Please enter valid choice\n");
            break;
        }
    } while (Continue != 0);

    return 0;
}