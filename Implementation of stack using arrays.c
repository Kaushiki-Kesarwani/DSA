#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int data;
    printf("Enter data:");
    scanf("%d", &data);

    if (top == N - 1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    int Element;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        Element = stack[top];
        printf("popped element is : %d\n", Element);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("Element at Top : %d\n", stack[top]);
    }
}

void Display()
{
    int i;
    for (int i = top; i >= 0; i--)
    {
        printf("Elements are : %d\n", stack[i]);
    }
}

void main()
{
    int ch;

    do
    {
        printf("Enter choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            Display();
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

    } while (ch != 0);
}
