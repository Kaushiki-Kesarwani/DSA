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
node* DeletionAtEnd(node*head){
    node* ptr1=head;
    node* ptr2;
    if(head!=NULL){
        ptr2=head->next;
          while(ptr2->next!=NULL){
             ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
            ptr1->next=NULL;
            free(ptr2);
    }else{
        printf("List is empty.\n");
    return head;
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
head=DeletionAtEnd(head);
display(head);


return 0;
}