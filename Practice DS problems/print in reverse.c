#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode*next;
}SinglyLinkedListNode;



void reversePrint(SinglyLinkedListNode*llist){
   if(llist==NULL){
    return;
   }
   reversePrint(llist->next);
   printf("%d\n",llist->data);
    
}
int main(){
    SinglyLinkedListNode*newnode,*head=NULL,*nxtptr;
    int n,data;//n is the number of element in linked list
    int t;//number of test cases
    printf("Enter number of test cases:");
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        printf("Enter number of element:");
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            printf("Enter data:");
            scanf("%d",&data);

newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
newnode->data=data;
newnode->next=NULL;

if(head==NULL){
    head=nxtptr=newnode;
}
else{
    nxtptr->next=newnode;
    nxtptr=newnode;
}
        }
    }
    reversePrint(head); 
return 0;
} 
