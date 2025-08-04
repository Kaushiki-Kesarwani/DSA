#include<stdio.h>

int isempty(int top){
    return top==-1;
}

int isfull(int top,int size){
    return top==size-1;
}

void push(int size,int *stack,int *top,int data){
    if(isfull(*top, size)){
        printf("Overflow.\n");
    }else{
        (*top)++;
        stack[*top]=data;
    }

}
void pop(int *top,int size,int *stack){
    if(isempty(*top)){
        printf("Underflow\n");
    }else{
        printf("popped data is : %d\n",stack[*top]);
        (*top)--;
    }

}
void peek(int *stack,int top){
    if(isempty(top)){
        printf("stack is empty.\n");
    }
    else{
         printf("top data is : %d\n",stack[top]);
    }
}
void display(int *stack,int top){
    if(isempty(top)){
        printf("stack is empty.\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("data : %d\n",stack[i]);
        }
    }
}

int main(){
    int size,data,top=-1,ch;

    printf("Enter the size of the stack:");
    scanf("%d",&size);

    int stack[size];

do{
    printf("Enter users choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
       printf("Enter data:");
    scanf("%d",&data);
    push(size,stack,&top,data);
        break;
    
    case 2:pop(&top,size,stack);
    break;

    case 3:peek(stack,top);
    break;

    case 4:display(stack,top);
    break;

    case 5:if(isempty(top)){
        printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }
break;
    case 6:if(isfull(top,size)){
        printf("stack is full\n");
    } 
    else{
       printf("stack is not full\n"); 
    }
    break;
    default:printf("Invalid choice\n");
        break;
    }
}while(ch!=0);

return 0;
}