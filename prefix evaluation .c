#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 100
char stack[MAX];
int top = -1;

void push(char x)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        return stack[top--];
    }
}

char peek()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        return stack[top];
    }
}

int prefixevaluation(char *exp)
{

    for (int i = strlen(exp) - 1; i >= 0; i--)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            push(exp[i] - '0');
        }
        else
        {
            int op1 = peek();
            pop();
            int op2 = peek();
            pop();

            switch (exp[i])
            {
            case '+':
                push(op1 + op2);
                break;

            case '-':
                push(op1 - op2);
                break;

            case '*':
                push(op1 * op2);
                break;

            case '/':
                push(op1 / op2);
                break;

            case '^':
                push(pow(op1, op2));
                break;
            }
        }
    }
    return peek();
}
int main()
{
    char prefix[MAX];
    printf("Enter expression:");
    scanf("%s", prefix);

    int result = prefixevaluation(prefix);
    printf("Evaluated prefix:%d\n", result);
    return 0;
}