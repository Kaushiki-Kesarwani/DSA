#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
struct node *top=0;

void push(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->link=top;
    top=newnode;
}

void peek(){
    if(top==0){
        printf("Stack is empty\n");
    }
    else{
        printf("Element at Top : %d\n",top->data);
        
    }
}

void pop(){
    struct node*temp;
    temp=top;

     if(top==0){
        printf("Underflow\n");
    }
    else{
        printf("popped data is : %d\n",top->data);
        top=top->link;
        free(temp);
    
    }

}

void Display(){
    struct node*ptr=top;

    if(top==0){
        printf("Stack is Empty\n");
    }
    else{
    while(ptr!=0){
        printf("Element are : %d\n",ptr->data);
        ptr=ptr->link;
        
    }
    }
}
int main(){
    int data,ch;
    

    do{
        
        printf("Enter choice:");
        scanf("%d",&ch);
       

        switch (ch)
        {
        
        case 1:
        printf("Enter data:");
        scanf("%d",&data);
        push(data);
            break;

        case 2:peek();
            break;

        case 3:pop();
            break;
        
        case 4:Display();
            break;
        default:printf("Invalid choice\n");
            break;
        }
        
    }while(ch!=0);
    return 0;
}