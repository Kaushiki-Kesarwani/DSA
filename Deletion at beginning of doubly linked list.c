
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node*prev;
    struct Node*next; 
}node;

void display(node*ptr){
    
    while(ptr!=NULL){
        printf("Data=%d\n",ptr->data);
        ptr=ptr->next;
        
    }
}
node*DeletionAtBeg(node*head){
    node*ptr=head;
    if(head!=NULL ){
        if(head->next!=NULL){
        
            head->next->prev=NULL;
            head=head->next;
                free(ptr);
        
    }
    }
    return head;
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

   printf("before Deletion:\n");
display(head);
printf("\n");
printf("After Deletion:\n");
head=DeletionAtBeg(head);
display(head);


return 0;
}