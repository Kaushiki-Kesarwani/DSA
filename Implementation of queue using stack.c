#include <stdio.h>
#define N 5
int stack1[N];
int stack2[N];
int top1 = -1;
int top2 = -1;
int count = 0;

void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top1++;
        stack1[top1] = data;
    }
}

void push2(int data)
{
    if (top2 == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top2++;
        stack2[top2] = data;
    }
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

void enqueue(int x)
{
    push1(x);
    count++;
}

void dequeue()
{
    int a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("pooped data : %d\n", b);

        count--;

        for (int i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}

void display()
{
    int i;
    if (top1 == -1 && top2 == -1)
    {
        printf("queue is empty\n");
    }
    for (i = 0; i <= top1; i++)
    {
        printf("Elements are : %d\n", stack1[i]);
    }
}

int main()
{
    int choose, data;
    do
    {
        printf("Enter choice :");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            enqueue(data);

            break;

        case 2:
            dequeue();

            break;

        case 3:
            display();

            break;

        case 0:
            printf("Exiting program.\n");
            break;
            
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choose != 0);
    return 0;
}