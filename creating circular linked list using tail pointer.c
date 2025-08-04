#include<stdio.h>
#include<stdlib.h>
//creating circular list only using tail pointer
struct node{
    int data;
    struct node*next;
};

void Display(struct node*tail){
    struct node*ptr=tail->next;
    if(tail==NULL){
        printf("List is Empty:");
    }
    else{
        do{
            printf("Element = %d\n",ptr->data);
            ptr=ptr->next;
        }while(ptr!=tail->next);

    }
}
int main(){
    struct node *tail,*newnode;
    int create=1;
    tail=0;
do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;

   if(tail==NULL){
    tail=newnode;
    tail->next=newnode;
   }
   else{
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
   }
   printf("data = %d\n",tail->next->data);

   printf("Do you want to continue creating nodes(1 for yes/0 for no:");
    scanf("%d",&create);
}while(create);

Display(tail);

return 0;
}