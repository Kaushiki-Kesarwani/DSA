#include <stdio.h>
#define N 50
char stack[N];
int top = -1;

void push(char exp)
{
    if (top == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = exp;
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
        printf("stack is empty\n");
    }
    else
    {
        return stack[top];
    }
}
int isoperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
}

int isoperand(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '1' && ch <= '9');
}

void infixtopostfix(char *infix)
{
    char postfix[N];
    int j = 0; // Index for postfix

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if (isoperand(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // pop '(' from stack
        }
        else if (isoperator(ch))
        {
            while (top != -1 && precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }
    while (top != -1)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("postfix expression : %s\n", postfix);
}

int main()
{
    char infix[N];

    printf("Enter an infix expression:");
    scanf("%s", infix);

    infixtopostfix(infix);
    return 0;
}