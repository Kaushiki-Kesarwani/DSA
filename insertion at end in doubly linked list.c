#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
}node;

void display(node*p){
while(p!=NULL){
    printf("data = %d\n",p->data);
    p=p->next;
}
}

void insertionAtEnd( node**head,int data){
    node*newnode=(node*)malloc(sizeof(node));
    node*ptr=*head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    newnode->data=data;
    ptr->next=newnode;
    newnode->next=NULL;
    newnode->prev=ptr;

}
int main(){

    node*head;
    node*second;
    node*third;
    node*fourth;

    //memory allocation dynamically
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    fourth=(node*)malloc(sizeof(node));


    //create links
    head->data=1;
    head->next=second;
    head->prev=NULL;

    second->data=2;
    second->next=third;
    second->prev=head;

    third->data=3;
    third->next=fourth;
    third->prev=second;

    fourth->data=4;
    fourth->next=NULL;
    fourth->prev=third;

   printf("before insertion:\n");
display(head);
printf("\n");
printf("After insertion:\n");
insertionAtEnd(&head,12);
display(head);


return 0;
}