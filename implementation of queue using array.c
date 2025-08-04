#include <stdio.h>
#define S 5
int queue[S];
int front = -1;
int rear = -1;

// check queue is empty
int isEmpty()
{
    return (front == -1 && rear == -1);
}
// check queue is full
int isfull()
{
    return (rear == S - 1);
}

// insertion operation(enqueue)
void Enqueue(int data)
{

    if (isfull())
    {
        printf("Overflow\n");
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

// deletion operation(dequeue)
void Dequeue()
{

    if (isEmpty())
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Deleted element is : %d\n", queue[front]);
        front++;
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Top element is : %d\n", queue[front]);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front; i < rear+1; i++)
        {
            printf("Elements : %d\n", queue[i]);
        }
    }
}

int main()
{
    int data;
    int ch;
    printf("Queue operation\n");
    printf("1.Enqueue\n2.Dequeue\n3.peek\n4.isEmpty\n5.isfull\n6.display\n");

    do
    {
        printf("Enter cases:");
        scanf("%d", &ch);

        switch (ch)
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
            if (isEmpty())
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not Empty\n");
            }
            break;

        case 5:
            if (isfull())
            {
                printf("Queue is full\n");
            }
            else
            {
                printf("Queue is not full\n");
            }
            break;

        case 6:
            display();
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch != 0);

    return 0;
}
