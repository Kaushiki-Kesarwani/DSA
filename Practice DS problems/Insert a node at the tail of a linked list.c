#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode*next;
}SinglyLinkedListNode;

SinglyLinkedListNode*insertNodeAtTail(SinglyLinkedListNode*head,int data){
SinglyLinkedListNode*ptr=head;
SinglyLinkedListNode*tailnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
tailnode->next=NULL;
tailnode->data=data;

if(head==NULL){
    head=tailnode;
}else{
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=tailnode;
}
return head;
}

void traverse(SinglyLinkedListNode*p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main(){
    int n,num,data;
    SinglyLinkedListNode*newnode,*head=0,*tail;
    printf("Enter number of elements in the Linked List:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&num);
newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
newnode->next=NULL;
newnode->data=num;

if(head==NULL){
    tail=head=newnode;
}
else{
    tail->next=newnode;
    tail=newnode;
}
    }
    printf("Enter the element for tail node:");
    scanf("%d",&data);

   head = insertNodeAtTail(head,data);
    traverse(head);
    return 0;
}