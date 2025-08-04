#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode{
    int data;
   struct SinglyLinkedListNode * next;
}SinglyLinkedListNode;

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
SinglyLinkedListNode*pointer_1=llist;
SinglyLinkedListNode*pointer_2=llist->next;

if(llist==NULL){
    return 0;
}
while(pointer_2!=NULL){
 if(pointer_1->data<pointer_2->data){
pointer_1=pointer_2;
pointer_2=pointer_2->next;
 }
 else{
    pointer_2=pointer_2->next;
    free(pointer_1->next);
    pointer_1->next=pointer_2;
 }
}
   return llist;
}

void traverse(SinglyLinkedListNode*llist){
    while(llist!=NULL){
        printf("%d\n",llist->data);
        llist=llist->next;
    }
}

int main(){
    int t,n,val;
     SinglyLinkedListNode*node,*head=NULL,*tail=NULL;
    printf("Enter number of test cases:");
    scanf("%d",&t);
for(int i=0;i<t;i++){
    head = tail = NULL;  // Reset head and tail for each test case

    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        printf("Enter value:");
        scanf("%d",&val);
       node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
       node->data=val;
       node->next=NULL;

       if(head==NULL){
        head=tail=node;
       }
       else{
        tail->next=node;
        tail=node;
       }
    }
        head=removeDuplicates(head);
        traverse(head);
       
}
return 0;
}