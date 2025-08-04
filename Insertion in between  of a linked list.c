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
//insertion in between
struct Node* insert_in_between(struct Node*Head,int Data,int index){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=Head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->Data=Data;
    ptr->next=p->next;
    p->next=ptr;
    return Head;
 
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
printf("Linked List After insertion.\n");
struct Node* head=insert_in_between(Head,9,3);
Traverse_linkedlist(head);

     return 0;
}
