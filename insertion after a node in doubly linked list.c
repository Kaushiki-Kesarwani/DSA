#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}node;


void Display(node*p){
while(p!=NULL){
    printf("data = %d\n",p->data);
    p=p->next;
}
}
void insertionAfteraNode(node**head,node*prevnode,int data){
    node*newnode=(node*)malloc(sizeof(node));

    newnode->data=data;
    newnode->prev=prevnode;
    if(prevnode->next!=NULL){
    newnode->next=prevnode->next;
    prevnode->next->prev=newnode;
    prevnode->next=newnode;

}
else{

    newnode->next=NULL;
    prevnode->next=newnode;
}
}

    
int main(){
    struct Node* Head;
    struct Node* Second;
    struct Node* Third;
    struct Node* Fourth;
    struct Node* Fifth;
   
    
    //Memory allocation dynamically using malloc function
    Head=(struct Node*)malloc(sizeof(struct Node));
    Second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));
    Fourth=(struct Node*)malloc(sizeof(struct Node));
    Fifth=(struct Node*)malloc(sizeof(struct Node));
   
    
   //Link the Nodes
   Head->data=5;
   Head->next=Second;

   Second->data=12;
   Second->next=Third;

   Third->data=32;
   Third->next=Fourth;

   Fourth->data=54;
   Fourth->next=Fifth;

   Fifth->data=87;
   Fifth->next=NULL;


   //calling function
   printf("Linked List before insertion.\n");
Display(Head);
printf("\n");
printf("Linked List After insertion.\n");
insertionAfteraNode(&Head,Fourth,88);
Display(Head);
return 0;
}