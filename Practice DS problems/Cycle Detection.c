#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode*next;
}SinglyLinkedListNode;

bool has_cycle(SinglyLinkedListNode*head){
    SinglyLinkedListNode*travnode=head;
    if(head==NULL){
        printf("List is Empty\n");
    }
    
    while(travnode!=head){
        travnode=travnode->next;
    }
    if(travnode->next==NULL){
        return "False";
    }
    else{
    printf("%d\n",travnode->data);
    return "True";
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
        has_cycle(head);  
}
return 0;
}