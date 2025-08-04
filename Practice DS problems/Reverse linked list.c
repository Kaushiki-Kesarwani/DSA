#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode*next;
}SinglyLinkedListNode;

SinglyLinkedListNode*Reverselinkedlist(SinglyLinkedListNode*head){
    SinglyLinkedListNode*prevnode=NULL,*currentnode=head,*nextnode=head;
while(nextnode!=NULL){
    nextnode=nextnode->next;
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;

}
return prevnode;
}

void traverse(SinglyLinkedListNode*p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
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
        head = Reverselinkedlist(head);
      traverse(head);
    }
    
return 0;
} 
