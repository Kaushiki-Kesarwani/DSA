#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//linked list traversal
void traversal(struct Node* ptr){
while(ptr!=NULL){
    printf("Data=%d\n",ptr->data);
    ptr=ptr->next;
}
}
//Reversing the linked list
struct Node* Reverse_linked_list(struct Node* head){
    struct Node* prevnode,*currentnode=head,*nextnode=head;
    prevnode=NULL;
    while(nextnode!=NULL){
    nextnode=nextnode->next;
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;
    }
    return prevnode;
}



int main(){
    struct Node* head;
     struct Node* second;
      struct Node* third;
       struct Node* fourth;

//Allocating the memory dynamically
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

//create link list
head->data=28;
head->next=second;

second->data=47;
second->next=third;

third->data=56;
third->next=fourth;

fourth->data=65;
fourth->next=NULL;

printf("Before Reverse the linked list.\n");
traversal(head);
printf("After Reverse the linked list.\n");
head=Reverse_linked_list(head);
traversal(head);
return 0;
}