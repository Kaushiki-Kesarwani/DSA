#include <stdio.h>
#define N 4
int queue[N];
int front = -1;
int rear = -1;

void Enqueue(int data)
{

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else if ((rear + 1) % N == front)
    {
        printf("Overflow\n");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = data;
    }
}

void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Dequeued element : %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("peek data is : %d\n", queue[front]);
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        while (i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % N;
        }
    }
    printf(" %d\n", queue[rear]);
}
// printf("Element in circular array : %d\n",queue[rear]);

int main()
{
    int data;
    int ch;
    printf("Queue operation\n");
    printf("1.Enqueue\n2.Dequeue\n3.peek\n4.display\n");

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
            display();
            break;

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 0);
    return 0;
}
