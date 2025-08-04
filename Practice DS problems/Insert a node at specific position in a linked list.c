#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode*next;
}SinglyLinkedListNode;

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {

    SinglyLinkedListNode*current=llist;
    SinglyLinkedListNode*current2=current->next;
    SinglyLinkedListNode*node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    node->data=data;
    node->next=NULL;

    if(llist==NULL){
        llist=node;
    }
    else{
        int i=0;
        while(i<position-1){
            current=current->next;
            current2=current2->next;
            i++;
        }
        current->next=node;
        node->next=current2;
    }
return llist;
}

void traverse(SinglyLinkedListNode*p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main(){
    int n,elements,position,data;
    SinglyLinkedListNode*newnode,*ptr,*head;
    head=NULL;
    printf("Number of elements in the linked list:");
    scanf("%d",&n);

printf("Enter elements of the linked list:");
    for(int i=0;i<n;i++){
        scanf("%d",&elements);
        newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        newnode->data=elements;
        newnode->next=NULL;
        
            if(head==NULL){
                head=ptr=newnode;
            }
            else{
                ptr->next=newnode;
                ptr=newnode;
            }
        }
        printf("Enter position:");
        scanf("%d",&position);
        printf("Enter data:");
        scanf("%d",&data);
        head=insertNodeAtPosition(head,data,position);
        traverse(head);
    return 0;
}
