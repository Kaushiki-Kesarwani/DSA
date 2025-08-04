#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define stack properties
#define MAX 100

typedef struct {
    char items[MAX];
    int top;
} Stack;

// Stack functions
void initStack(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char value) {
    if (!isFull(s)) {
        s->items[++(s->top)] = value;
    }
}

char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0';
}

char peek(Stack *s) {
    return s->items[s->top];
}

// Helper function for precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to check if character is an operand
int isOperand(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// Convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    Stack s;
    initStack(&s);
    int k = 0;  // index for postfix output

    for (int i = 0; i < strlen(infix); i++) {
        char ch = infix[i];

        if (isOperand(ch)) {
            // Directly append operands to postfix expression
            postfix[k++] = ch;
        } 
        else if (ch == '(') {
            // Push '(' to stack
            push(&s, ch);
        } 
        else if (ch == ')') {
            // Pop until '(' is encountered
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[k++] = pop(&s);
            }
            pop(&s);  // Remove '(' from stack
        } 
        else {
            // Pop operators from stack while they have higher or equal precedence
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(ch)) {
                postfix[k++] = pop(&s);
            }
            push(&s, ch);  // Push current operator
        }
    }

    // Pop any remaining operators in the stack
    while (!isEmpty(&s)) {
        postfix[k++] = pop(&s);
    }

    postfix[k] = '\0';  // Null terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
