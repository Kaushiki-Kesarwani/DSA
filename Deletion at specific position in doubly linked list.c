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
node*DeletionAtSpecificPos(node*head,int index){
    node*ptr1=head;
    node*ptr2=head->next;
    if(ptr1==NULL || index<1){
        printf("Index is out of bounds.\n");
    }
    int i=0;
    while(i!=index-1){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        i++;
    }
    if(ptr2->next!=NULL){
        ptr1->next=ptr2->next;
        ptr2->next->prev=ptr1;
        free(ptr2);
    }
    else{
        ptr1->next=NULL;
        free(ptr2);
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
head=DeletionAtSpecificPos(head,0);
display(head);


return 0;
}