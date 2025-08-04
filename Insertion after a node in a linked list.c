#include<stdio.h>
#include<stdlib.h>
 struct Node{
    int Data;
    struct Node* next;
};

void Traverse_linkedlist(struct Node* ptr){
    while(ptr!=NULL){
    printf("element = %d\n",ptr->Data);
   ptr= ptr->next;
}
}
//insertion after a node
struct Node* insertion_after_Node(struct Node* head,struct Node* prev_Node,int data){
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->Data=data;
    ptr->next=prev_Node->next;
    prev_Node->next=ptr;
    return head;
}


int main(){
    struct Node* Head;
    struct Node* Second;
    struct Node* Third;
    struct Node* Fourth;
    struct Node* Fifth;
    struct Node* Sixth;
    
    //Memory allocation dynamically using malloc function
    Head=(struct Node*)malloc(sizeof(struct Node));
    Second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));
    Fourth=(struct Node*)malloc(sizeof(struct Node));
    Fifth=(struct Node*)malloc(sizeof(struct Node));
    Sixth=(struct Node*)malloc(sizeof(struct Node));
    
   //Link the Nodes
   Head->Data=5;
   Head->next=Second;

   Second->Data=12;
   Second->next=Third;

   Third->Data=32;
   Third->next=Fourth;

   Fourth->Data=54;
   Fourth->next=Fifth;

   Fifth->Data=87;
   Fifth->next=Sixth;

   Sixth->Data=22;
   Sixth->next=NULL;

   //calling function
   printf("Linked List before insertion.\n");
Traverse_linkedlist(Head);
printf("\n");
 printf("Linked List after insertion.\n");
Head=insertion_after_Node(Head,Sixth,100);
Traverse_linkedlist(Head);

return 0;
}