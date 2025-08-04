#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int data;
    struct Queue *next;
} que;

que *front = 0;
que *rear = 0;

// insertion function(Enqueue)
void Enqueue(int data)
{
    que *node = (que *)malloc(sizeof(int));
    node->data = data;

    if (front == 0 && rear == 0)
    {
        front = rear = node;
        front->next = NULL;
    }
    else
    {
        rear->next = node;
        node->next = NULL;
        rear = rear->next;
    }
}

// Deletion function(Dequeue)
void dequeue()
{
    que *ptr1 = front;

    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("Deleted data is : %d\n", front->data);
        front = rear = NULL;
        free(ptr1);
    }
    else
    {
        printf("Deleted data is : %d\n", front->data);
        front = ptr1->next;
        free(ptr1);
    }
}

// Function to print the top element or peek element
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Top data is : %d\n", front->data);
    }
}

// Function to print all the data
void display()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        que *ptr = front;
        while (ptr != 0)
        {
            printf("Data : %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int data;
    int choice;

    printf("Operation in Queue.\n");
    printf("1. Enqueue\n2. dequeue\n3. peek\n4. display\n");
    do
    {
        printf("Enter choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            Enqueue(data);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("Invalid choice\n");

            break;
        }
    } while (choice != 0);
    return 0;
}
