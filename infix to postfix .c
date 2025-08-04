#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack{
    int size;
    int top;
    char *arr;
}stk;

int stacktop(stk*sp){
    return sp->arr[sp->size];
}

int isEmpty(stk *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
    return 0;
}
}

int isfull(stk *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
    return 0;
}
}

void push(stk *ptr,char val){
    if(isfull(ptr)){
        printf("Stack overflow!cannot push %d to the stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

char pop(stk *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!cannot pop from the stack\n");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char ch){
    if(ch == '*' || ch == '/'){
        return 3;
    }else if(ch == '+' || ch == '-'){
        return 2;
    }else{
        return 0;
    }
}

int isoperator(char ch){
    if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
        return 1;
    }else{
        return 0;
    }
}

char *infixtopostfix(char *infix){
    stk *sp=(stk*)malloc(sizeof(stk));

    sp->size=10;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));

    char *postfix=(char*)malloc(strlen(infix)+1*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }else{
            if(precedence(infix[i]>precedence(stacktop(sp)))){
                        push(sp,infix[i]);
                        i++;
            }else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
    }
    int main(){
        char*infix="x-y/z-k*d";
        printf("postfix is %s",infixtopostfix(infix));
        return 0;
    }