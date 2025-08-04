#include <stdio.h>
#include<string.h>
#define max 50
int stack[max];
int postfix[max];
int top1, top2 = -1;

int isempty()
{
    return (top1 == -1);
}

int isfull()
{
    return (top1 == max - 1);
}
// insertion
void push(char expr)
{ // expr = expression
    if (isfull())
    {
        printf("Overflow\n");
    }else{
    top1++;
    stack[top1] = expr;
}
}

//Deletion
void pop()
{
    if (isempty())
    {
        printf("Underflow\n");
    }
    else{
    printf("poped data : %c\n", stack[top1]);
    top1--;
}
}

void peek(){
    if (isempty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("peek element : %c\n",stack[top1]);
    }
}

void Display(){
    if(isempty())
    {
        printf("Stack is empty\n");
    }
    else{
        for(int i=top1;i>0;i--){
            printf("Expression : %c\n",stack[i]);
        }
    }
}

char infixtopostfix(char expr){
for(int i=0;expr[i]!='\0';i++){
    if(expr[i]=='+'||'-')
}
}
int main()
{
    char expr;
    int ch;

    do
    {
        printf("Enter choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter expression:");
            scanf(" %s", expr);
            push(expr);
            break;

        case 2:
            pop();
            break;

            case 3:
            Display();
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch != 0);
    return 0;
}